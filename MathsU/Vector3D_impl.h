//
// Created by clsda on 2024/11/2.
//

#include "Vector3D.h"
#include "Algebra.h"
#include "AlgebraSquareRoot.h"
//#include "Point3D.cpp"

//class Vector3D {
////    Point3D _point3D;
//
//
//
//public:
//
//
//};
//double x,y,z;
template <class T, class U, class V>
Vector3D<T,U,V>::Vector3D(T x, U y, V z) : x(x), y(y), z(z) {}
//{
//    this->x = x;
//    this->y = y;
//    this->z = z;
//}
//    Vector3D(Point3D point3D) {
//        this->x = point3D.getX();
//        this->y = point3D.getY();
//        this->z = point3D.getZ();
//    }
//template <class T, class U, class V>
//template class Vector3D<T, U, V>
template <class T, class U, class V>
T Vector3D<T, U, V>::getX() {
    return x;
}
template <class T, class U, class V>
U Vector3D<T, U, V>::getY() {
    return y;
}
template <class T, class U, class V>
V Vector3D<T, U, V>::getZ() {
    return z;
}
template <class T, class U, class V>
T Vector3D<T, U, V>::setX(double x) {
    return this->x = x;
}
template <class T, class U, class V>
U Vector3D<T, U, V>::setY(double y) {
    return this->y = y;
}
template <class T, class U, class V>
V Vector3D<T, U, V>::setZ(double z) {
    return this->z = z;
}

template <class T, class U, class V>
Vector3D<T, U, V> Vector3D<T, U, V>::add(Vector3D vector3D) {
//        return new Vector3D(x + vector3D.getX(), y + vector3D.getY(), z + vector3D.getZ());
//        return Vector3D(x + vector3D.getX(), y + vector3D.getY(), z + vector3D.getZ());
    this->x += vector3D.getX();
    this->y += vector3D.getY();
    this->z += vector3D.getZ();
    return *this;

}
template <class T, class U, class V>
Vector3D<T, U, V> Vector3D<T, U, V>::sub(Vector3D vector3D) {
    return add(vector3D.scale(-1));
}
template <class T, class U, class V>
Vector3D<T, U, V> Vector3D<T, U, V>::scale(double scale) {
    this->x *= scale;
    this->y *= scale;
    this->z *= scale;
    return *this;
}
template <class T, class U, class V>
auto Vector3D<T, U, V>::dot(Vector3D vector3D) {
    return x * vector3D.getX() + y * vector3D.getY() + z * vector3D.getZ();
}
template <class T, class U, class V>
Vector3D<T, U, V> Vector3D<T, U, V>::cross(Vector3D vector3D) {
    return Vector3D(y * vector3D.getZ() - z * vector3D.getY(),
                    z * vector3D.getX() - x * vector3D.getZ(),
                    x * vector3D.getY() - y * vector3D.getX());
}

//    Vector3D reflect(Vector3D normal) {
//        return sub(normal.scale(2 * dot(normal)));
//    }
template <class T, class U, class V>
Vector3D<T, U, V> Vector3D<T, U, V>::normal(Vector3D vector3D) {
    return cross(vector3D).normalize();
}
template <class T, class U, class V>
auto Vector3D<T, U, V>::length() {
    return AlgebraSquareRoot::squareRoot(x * x + y * y + z * z);
}
template <class T, class U, class V>
auto Vector3D<T, U, V>::lengthsquared() {
    return x * x + y * y + z * z;
}
template <class T, class U, class V>
Vector3D<T, U, V> Vector3D<T, U, V>::normalize() {
    return scale(1 / length());
}
template <class T, class U, class V>
Vector3D<T, U, V> Vector3D<T, U, V>::clone() {
    return Vector3D(x, y, z);
}
template <class T, class U, class V>
bool Vector3D<T, U, V>::equals(Vector3D vector3D) {
    return x == vector3D.getX() && y == vector3D.getY() && z == vector3D.getZ();
}
