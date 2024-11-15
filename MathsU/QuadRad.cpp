//
// Created by clsda on 2024/11/9.
//

#include "QuadRad.h"

//QuadRad QuadRad::operator+(const QuadRad &other) const{
//    return QuadRad(0, 0, 0);
//}

QuadRad QuadRad::add(const QuadRad &other) const {
    return *this + other;
}

//QuadRad QuadRad::operator*(const QuadRad &other) const {
////    denominator *= other.denominator;
////    return QuadRad(0, 0, 0);
//    return QuadRad(denominator * other.denominator, numerator * other.numerator, root * other.root);
//}

int QuadRad::getDenominator() {
    return denominator;
}
