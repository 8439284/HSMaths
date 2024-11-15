//
// Created by clsda on 2024/11/2.
//

#ifndef HSMATHS_SOLIDGEO_H
#define HSMATHS_SOLIDGEO_H
#include "Vector3D.h"
#include "Point3D.cpp"

#include "Fraction.h"

//#include "Statistics.h"
//#include "Vector3D.h"

//class Statistics;
class SolidGeo {
public:
    template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>  //, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20
    static auto dihedralAngleCos(Vector3D<T1, T2, T3> v1, Vector3D<T4, T5, T6> v2, Vector3D<T7, T8, T9> v3, Vector3D<T10, T11, T12> v4) {
//        return (v1.cross(v2).dot(v3.cross(v4))) / (v1.cross(v2).length() * v3.cross(v4).length());
        Vector3D norm1 = v1.cross(v2);
        Vector3D norm2 = v3.cross(v4);
        auto dot1 = norm1.dot(norm2);
        auto len1 = norm1.length();
        auto len2 = norm2.length();
        auto len1_2 = len1 * len2;
        auto returnVal = dot1 / len1_2;
        return returnVal;
    }

//    static Vector3D<double, double, double> a() {
//        return Vector3D<double, double, double>(1, 2, 3);
//    }

//    static double dihedralAngleCosQuad(Vector3D v1, Vector3D v2, Vector3D v3, Vector3D v4) {
//        int numerator = v1.cross(v2).dot(v3.cross(v4));
//        return () / (v1.cross(v2).length() * v3.cross(v4).length());
//    }

    static double dihedralAngleCos(Point3D v1, Point3D v2, Point3D v3, Point3D v4) {
//        dihedralAngleCos(v1, v2, v3, v4);
//        return dihedralAngleCos(v1 - v2, v3 - v2, v4 - v3, v2 - v4);
//        return dihedralAngleCos(v1.sub(v2).toVector(), v3.sub(v2).toVector(), v4.sub(v3).toVector(), v2.sub(v4).toVector());  //actually v4 sun v2
        return dihedralAngleCos(v1.sub(v2).toVector(), v3.sub(v2).toVector(), v4.sub(v2).toVector(), v3.sub(v2).toVector());
    }

    static double lineAngleCos(Point3D p1, Point3D p2, Point3D p3) {
        return (p1.sub(p2).toVector().dot(p3.sub(p2).toVector())) / (p1.sub(p2).toVector().length() * p3.sub(p2).toVector().length());
    }

//    static void a() {
//
//    }

//    SolidGeo() {};
//    static Statistics b() {return Statistics();};

};


#endif //HSMATHS_SOLIDGEO_H
