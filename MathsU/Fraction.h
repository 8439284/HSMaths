//
// Created by clsda on 2024/11/9.
//

#ifndef HSMATHS_FRACTION_H
#define HSMATHS_FRACTION_H


#include <string>

class Fraction {
    int denominator;
    int numerator;
public:
    Fraction() : numerator(0), denominator(1) {}
    Fraction(int numerator, int denominator) : denominator(denominator), numerator(numerator) {}
    Fraction(int numerator) : denominator(1), numerator(numerator) {}

    std::string toString();

    Fraction* reduction();
    static double* reduction(double numerator, double denominator);

    Fraction* operator+(const Fraction &other) const;
    Fraction* operator*(const Fraction &other) const;
};


#endif //HSMATHS_FRACTION_H
