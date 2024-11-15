#include <iostream>
#include <vector>
//#include "Statistics/Statistics.h"
#include "MathsU/Statistics.h"
#include "MathsU/SolidGeo.h"
#include "MathsU/Vector3D.h"
#include "MathsU/Point3D.h"
//#include "Statistics/Variance.h"
#include "MathsU/QuadRad.h"
#include "MathsU/Algebra.h"
#include "MathsU/Fraction.h"
//Fraction Fraction::reduction() {
//
//}
int main() {
//    Fraction frac(1, 2);
//    Vector3D a(frac,2,3);  //<Fraction, double, double>
//    Vector3D b = a.clone();
//    Vector3D c = a + b;

//    std::cout << a.getX().toString() << std::endl;

//    QuadRad vec11(-2, 3, 1);
//    QuadRad vec12(0, 5, 1);
//    QuadRad vec13(-4, 3, 1);
//
//    QuadRad vec21(-2, 3, 1);
//    QuadRad vec22(2, 1, 1);
//    QuadRad vec23(2, 3, 1);
//
//    QuadRad vec31(-2, 3, 1);
//    QuadRad vec32(0, 1, 1);
//    QuadRad vec33(2, 3, 1);

    QuadRad point11(0, 3, 1);
    QuadRad point12(0, 5, 1);
    QuadRad point13(0, 3, 1);

    QuadRad point21(0, 3, 1);
    QuadRad point22(2, 1, 1);
    QuadRad point23(2, 1, 1);

    QuadRad point31(2, 3, 1);
    QuadRad point32(0, 1, 1);
    QuadRad point33(4, 3, 1);

    QuadRad point41(0, 1, 1);
    QuadRad point42(0, 1, 1);
    QuadRad point43(2, 1, 1);

    Point3D point1(point11, point12, point13);
    Point3D point2(point21, point22, point23);
    Point3D point3(point31, point32, point33);
    Point3D point4(point41, point42, point43);


//    QuadRad test(0, 1,1);
//    QuadRad test2(1, 2, 1);
    std::cout << SolidGeo::dihedralAngleCos(point1, point2, point3, point4).toString() << std::endl;  //.


//    Vector3D vec1(vec11, vec12, vec13);
//    Vector3D vec2(vec21, vec22, vec23);
//    Vector3D vec3(vec31, vec32, vec33);
//    Vector3D vec3 = vec1 + vec2;
//    QuadRad c = -a / b;
//    std::cout << c.toString() << std::endl;
//    Vector3D vec1(a, b, c);
//    Vector3D vec2 = vec1.clone();
//    Vector3D vec3 = vec1 + vec2;
//    Vector3D vec4 = vec3.clone();
//    Vector3D vec5 (-1, 0, 0);
//    Vector3D vec6 (0, -1, 0);
//    Vector3D vec7 (0, 1, 0);
//    Vector3D vec8 (a, b, c);
//
//    SolidGeo::dihedralAngleCos(vec1, vec2, vec3, vec4);
//    std::cout <<  5 + 0<< std::endl;  //SolidGeo::dihedralAngleCos(vec1, vec2, vec3, vec2).toString()

//    std::cout << -4 % -3 << std::endl;


//###################################################
//    std::cout << "Hello, World!" << std::endl;
//    double test[] = {1.0, 2.0, 3.0, 4.0, 5.0};
//    std::vector<double> test = {1.0, 2.0, 3.0, 4.0, 5.0};
//    std::vector<double> weight = {3,2};
//    std::vector<double> averages = {170, 160};
//    std::vector<double> variance = {17, 30};
//    std::vector<double> weight = {5,4};
//    std::vector<double> averages = {170, 161};
//    std::vector<double> variance = {19, 28};
//    double length = sizeof(test) / sizeof(test[0]);
//    std::cout << "Average: " << Average::aver(test) << std::endl;  //Average(test, 5)
//    std::cout << "Average: " << Statistics::average(averages, weight) << std::endl;
//    std::cout << "var" << Statistics::varss(averages, variance, weight) << std::endl;
//    Point3D a(1, 2, 3);
//    Point3D b(4, 5, 6);
//    Point3D c (7, 8, 9);
//    Point3D d(10, 11, 12);
//    Point3D a(-1, 0, 0);
//    Point3D b(0, -1, 0);
//    Point3D c (0, 1, 0);
//    Point3D d(1, 0, 0);
//    std::cout << Algebra::gcd(82564594, 92756340) << std::endl;
//    Fraction a(1,2);
//    Fraction b(3,4);
//    std::cout << (a + b)->toString() << std::endl;

//    std::cout << Fraction(1).toString() << std::endl;
//    std::cout << Algebra::gcd(9, 6) << std::endl;
/*    double x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4;
    std::cout << "依次输入4点来求二面角1-23-4" << std::endl;
    std::cout << "格式: x y z" << std::endl;
    std::cout << "例子: 1 2.5 3" << std::endl;
    std::cout << "Point1: ";
    std::cin >> x1 >> y1 >> z1;
    std::cout << "Point2: ";
    std::cin >> x2 >> y2 >> z2;
    std::cout << "Point3: ";
    std::cin >> x3 >> y3 >> z3;
    std::cout << "Point4: ";
    std::cin >> x4 >> y4 >> z4;
    // ;
//    Point3D a(0, 0, 0);
//    Point3D b(0, 1, 1);
//    Point3D c (1, 1, 0);
//    Point3D d(0, 2, 0);
    Point3D a(x1, y1, z1);
    Point3D b(x2, y2, z2);
    Point3D c (x3, y3, z3);
    Point3D d(x4, y4, z4);
    std::cout << "二面角余弦值: " << SolidGeo::dihedralAngleCos(a, b, c, d) << std::endl;
    */
//    QuadRad test1(1, 1);
//    QuadRad test2(2, 2);
//    test1 + test2;

//    system("pause");
    return 0;

}
