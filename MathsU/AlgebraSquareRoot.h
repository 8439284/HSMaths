//
// Created by clsda on 2024/11/15.
//

#ifndef HSMATHS_ALGEBRASQUAREROOT_H
#define HSMATHS_ALGEBRASQUAREROOT_H

#include "QuadRad.h"

class AlgebraSquareRoot {

public:
    static QuadRad squareRoot(QuadRad quadRad) {  //Algebra::
            return quadRad.squareRoot();
    //        if (quadRad.getRoot() == 1) {
    //            return QuadRad(1, quadRad.getDenominator(), quadRad.getDenominator() * quadRad.getNumerator()).simplify();
    //        }
    //        throw std::invalid_argument("Cannot square root a fraction with a root");
    }
    static double squareRoot(double a) {
        return sqrt(a);
    }
};


#endif //HSMATHS_ALGEBRASQUAREROOT_H
