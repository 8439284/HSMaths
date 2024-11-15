//
// Created by clsda on 2024/11/9.
//

#include "Algebra.h"



double Algebra::max(double a, double b) {
    if (a > b) return a;
    return b;
}

double Algebra::min(double a, double b) {
    if (a < b) return a;
    return b;
}

int Algebra::max(int a, int b) {
    if (a > b) return a;
    return b;
}

int Algebra::min(int a, int b) {
    if (a < b) return a;
    return b;
}

int Algebra::gcd(int a, int b) {
    int bigger;
    int smaller;
    if (a > b) {
        bigger = a;
        smaller = b;
    } else {
        bigger = b;
        smaller = a;
    }
    return absolute(gcd2(bigger, smaller));
}

int Algebra::gcd2(int a, int b) {
//    if (a == 0) return b;
//    return gcd(b, a % b);


//    int remainder = a % b;
//    while (remainder != 0) {
//        a = b;
//        b = remainder;
//        remainder = a % b;
//    }
//    return b;
    if (b == 0) return a;
    return gcd2(b, a % b);
}
//class QuadRad;

