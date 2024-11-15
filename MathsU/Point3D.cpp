//
// Created by clsda on 2024/11/2.
//

#include "Point3D.h"
#include "Vector3D.h"

class Point3D {
//    Vector3D* _vector3D;
    double x;
    double y;
    double z;


public:
    Point3D(double x, double y, double z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    double getX() {
        return x;
    }
    double getY() {
        return y;
    }
    double getZ() {
        return z;
    }
    Point3D add(Point3D point3D) {
        return Point3D(x + point3D.x, y + point3D.y, z + point3D.z);
    }

    Point3D sub(Point3D point3D) {
        return Point3D(x - point3D.x, y - point3D.y, z - point3D.z);
    }
//
//    Point3D mul(double d) {
//        return Point3D(x * d, y * d, z * d);
//    }
//
    Vector3D<double, double, double> toVector() {
        return Vector3D(x, y, z);
    }


////
//    Point3D(double x, double y, double z) {
//        this->x = x;
//        this->y = y;
//        this->z = z;
//    }
//    double x, y, z;
//
//    Point3D(double x, double y, double z) : x(x), y(y), z(z) {}
//    Point3D() : x(0), y(0), z(0) {}
//    Point3D(const Point3D &p) : x(p.x), y(p.y), z(p.z) {}
//    Point3D operator+(const Point3D &p) const {
//        return Point3D(x + p.x, y + p.y, z + p.z);
//    }
//    Point3D operator-(const Point3D &p
////

};

