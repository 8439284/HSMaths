cmake_minimum_required(VERSION 3.29)
project(HSMaths)

set(CMAKE_CXX_STANDARD 26)

include_directories("./include")

add_executable(HSMaths main.cpp
        MathsU/Variance.cpp
        MathsU/Variance.h
        MathsU/Statistics.cpp
        MathsU/Statistics.h
        include/clsdautil/ArrayU.h
        include/clsdautil/VectorU.h
        MathsU/Point3D.cpp
        MathsU/Point3D.h
        MathsU/Vector3D_impl.h
        MathsU/Vector3D.h
        MathsU/SolidGeo.cpp
        MathsU/SolidGeo.h
        MathsU/QuadRad.cpp
        MathsU/QuadRad.h
        MathsU/Algebra.cpp
        MathsU/Algebra.h
        MathsU/Fraction.cpp
        MathsU/Fraction.h
        MathsU/AlgebraSquareRoot.cpp
        MathsU/AlgebraSquareRoot.h
)
