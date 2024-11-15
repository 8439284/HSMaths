//
// Created by clsda on 2024/11/2.
//

#include "Point3D.h"
#include "Vector3D.h"

template <class T, class U, class V> class Point3D {
//    Vector3D* _vector3D;
    T x;
    U y;
    V z;


public:
    Point3D(T x, U y, V z) : x(x), y(y), z(z) {}
//    {
//        this->x = x;
//        this->y = y;
//        this->z = z;
//    }
    auto getX() {
        return x;
    }
    auto getY() {
        return y;
    }
    auto getZ() {
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
//    template<typename T1, typename T2, typename T3>
    Vector3D<T, U, V> toVector() {
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

