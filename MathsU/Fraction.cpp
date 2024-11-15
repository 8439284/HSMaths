//
// Created by clsda on 2024/11/9.
//

#include "Fraction.h"
#include "Algebra.h"
#include <iostream>

Fraction* Fraction::operator+(const Fraction &other) const {
    double denominator = this->denominator * other.denominator;
    double numerator = this->numerator * other.denominator + this->denominator * other.numerator;
    return Fraction(numerator, denominator).reduction();
//    return Fraction(0, 0);
}

Fraction* Fraction::reduction() {
    int gcd = Algebra::gcd(numerator, denominator);
//    return Fraction(numerator / gcd, denominator / gcd);
    numerator /= gcd;
    denominator /= gcd;
    return this;
}

std::string Fraction::toString() {
    if (denominator == 1) {
        return std::to_string(numerator);
    }
    return std::to_string(numerator) + "/" + std::to_string(denominator);
}

Fraction *Fraction::operator*(const Fraction &other) const {
//    return nullptr;
    double denominator = this->denominator * other.denominator;
    double numerator = this->numerator * other.numerator;
    return Fraction(numerator, denominator).reduction();
}

double* Fraction::reduction(double numerator, double denominator) {
    double gcd = Algebra::gcd(numerator, denominator);
    double *returnArray = new double[2]{numerator / gcd, denominator / gcd};
    return returnArray;
}

//int* getArray() {
//    int *array = new int[2]{1, 2};
//    return array;
//}
