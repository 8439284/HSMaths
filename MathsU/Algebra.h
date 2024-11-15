//
// Created by clsda on 2024/11/9.
//

#ifndef HSMATHS_ALGEBRA_H
#define HSMATHS_ALGEBRA_H

#include <cmath>
//#include "QuadRad.h"
#include <iostream>


class Algebra {
public:
    static double max(double a, double b);
    static double min(double a, double b);
    static int max(int a, int b);
    static int min(int a, int b);
    static int gcd(int a, int b);

    template<typename T>
    static T absolute(T a) {
        if (a < 0) return -a;
        return a;
    }

//    static double squareRoot(double a) {
//        return sqrt(a);
//    }
//    class QuadRad;
//    static QuadRad squareRoot(QuadRad quadRad);
//    static double
private:
    static int gcd2(int a, int b);

//#include "Algebra_impl.h"


};





#endif //HSMATHS_ALGEBRA_H
