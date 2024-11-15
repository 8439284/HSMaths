//
// Created by clsda on 2024/11/9.
//

#ifndef HSMATHS_QUADRAD_H
#define HSMATHS_QUADRAD_H

#include "Algebra.h"
#include <iostream>
#include <cmath>
//class Algebra;
class QuadRad {
    int denominator;  //分母
    int numerator;  //分子
    int root;  //根号内的数
public:
    QuadRad(int numerator, int denominator, int root) : numerator(numerator), denominator(denominator), root(root) {
        this->simplify();
    }
    QuadRad(int numerator, int denominator) : numerator(numerator), denominator(denominator), root(1) {
        this->simplify();
    }
    QuadRad(int numerator) : numerator(numerator), denominator(1), root(1) {
        this->simplify();
    }
    operator double () const {
        return numerator * sqrt(root)/ denominator;
    }
    QuadRad setDenominator(int denominator) {
        this->denominator = denominator;
        return *this;
    }
    QuadRad setNumerator(int numerator) {
        this->numerator = numerator;
        return *this;
    }
    QuadRad setRoot(int root) {
        this->root = root;
        return *this;
    }
    int getDenominator();
    int getNumerator();
    int getRoot();

    QuadRad operator+(const QuadRad &other) const {
//        return QuadRad(numerator * other.denominator + other.numerator * denominator, denominator * other.denominator, root);
        if (root != other.root) {
            throw std::invalid_argument("Cannot add two QuadRads with different roots");
        }
        return QuadRad(numerator * other.denominator + other.numerator * denominator, denominator * other.denominator, root).simplify();
    }

    QuadRad operator+=(const QuadRad &other) {
        return *this = *this + other;
    }
    QuadRad operator-(const QuadRad &other) const {
        return *this + (other.inverseConst());
    }
    QuadRad operator-=(const QuadRad &other) {
        return *this = *this - other;
    }
    QuadRad add(const QuadRad &other) const;
    QuadRad operator*(const QuadRad &other) const {
        int _numerator = numerator * other.numerator;
        int _denominator = denominator * other.denominator;
        int _root = root * other.root;
        return QuadRad(_numerator, _denominator, _root).simplify();
    }
    QuadRad operator*(int other) const {
        return QuadRad(numerator * other, denominator, root).simplify();
    }
    QuadRad operator/(const QuadRad &other) const {
        return *this * other.reciprocalConst();
    }

    QuadRad rootReduction() {
        int _root = root;
        for (int i = 2; i <= _root; i++) { // 从2开始循环到根号内的数
//            if (root % i == 0) { // 如果根号内的数能被i整除
//                while (numerator % i == 0 && denominator % i == 0) { // 如果分子和分母都能被i整除
//                    numerator /= i; // 将分子和分母都除以i
//                    denominator /= i;
//                }
//                if (numerator % i == 0) { // 如果分子还能被i整除
//                    numerator /= i; // 将分子除以i
//                } else if (den

            while (true) {
                int iSquared = i*i;
                if (_root % iSquared == 0) {
                    _root /= iSquared;
                    numerator *= i;
                } else {
                    break;
                }
            }
        }
        root = _root;
        return *this;
    }
    QuadRad fractionReduction() {
        double gcd = Algebra::gcd(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
        if (numerator < 0 and denominator < 0 or numerator > 0 and denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
//        } else if (numerator > 0 and denominator < 0) {
//            numerator = -numerator;
//            denominator = -denominator;
//        }

        return *this;
    }
    QuadRad simplify() {
        rootReduction();
        return fractionReduction();
    }

    std::string toString() {
        if (numerator == 0 or root == 0) {
            return "0";
        }
//        if (denominator == 0) {
//            return "∞";
//        }
        if (denominator == 1) {
            if (root == 1) {
                return std::to_string(numerator);
            } else {
                if (numerator == 1) {
                    return "√" + std::to_string(root);
                } else if (numerator == -1) {
                    return "-√" + std::to_string(root);
                }
                return std::to_string(numerator) + "√" + std::to_string(root);
            }
        }
        else {
            if (root == 1) {
                return std::to_string(numerator) + "/" + std::to_string(denominator);
            } else {
                if (numerator == 1) {
                    return "(√" + std::to_string(root) + ")/" + std::to_string(denominator);
                }
                else if (numerator == -1) {
                    return "-(√" + std::to_string(root) + ")/" + std::to_string(denominator);
                }
                else if (numerator < 0) {
                    return "-(" + std::to_string(-numerator) + "√" + std::to_string(root) + ")/" + std::to_string(denominator);
                }
                return "(" + std::to_string(numerator) + "√" + std::to_string(root) + ")/" + std::to_string(denominator);
            }
        }
//        return "(" + std::to_string(numerator) + "√" + std::to_string(root) + ")/" + std::to_string(denominator);
    }

    QuadRad reciprocal() {
        int buffer = numerator;
        numerator = denominator;
        denominator = buffer * root;
        return this->simplify();
    }

    QuadRad reciprocalConst() const{
        return QuadRad(denominator, numerator * root, root).simplify();
    }

    QuadRad operator-() const {
        return this->inverseConst();
    }

    QuadRad inverseConst() const {
        return QuadRad(-numerator, denominator, root).simplify();
    }

    QuadRad squareRoot() const {
        if (root == 1) {
            return QuadRad(1, denominator, denominator * numerator).simplify();
        }
//        return *this;
        throw std::invalid_argument("Cannot square root a fraction with a root");

    }






};


#endif //HSMATHS_QUADRAD_H
