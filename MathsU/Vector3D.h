//
// Created by clsda on 2024/11/2.
//

#ifndef HSMATHS_VECTOR3D_H
#define HSMATHS_VECTOR3D_H
#include "Point3D.h"
#include <cmath>
//#include "SolidGeo.h"


//class Point3D;
template <class T, class U, class V> class Vector3D {
    T x;
    U y;
    V z;
public:
    Vector3D(T x, U y, V z);// {
//        this->x = x;
//        this->y = y;
//        this->z = z;
//    };
    T getX(); //{ return x;};
    U getY();
    V getZ();
    T setX(double x);
    U setY(double y);
    V setZ(double z);
    Vector3D add(Vector3D vector3D);
    Vector3D operator+(Vector3D other) {
        return Vector3D<T, U, V>(x + other.x, y + other.y, z + other.z);
    }

    Vector3D sub(Vector3D vector3D);

    Vector3D scale(double scale);

    auto dot(Vector3D vector3D);

    Vector3D cross(Vector3D vector3D);

//    Vector3D reflect(Vector3D normal) {
//        return sub(normal.scale(2 * dot(normal)));
//    }
    Vector3D normal(Vector3D vector3D);

    auto length();
    auto lengthsquared();

    Vector3D normalize();

    Vector3D clone();

    bool equals(Vector3D vector3D);

//    static Solid a();
};

#include "Vector3D_impl.h"


#endif //HSMATHS_VECTOR3D_H
