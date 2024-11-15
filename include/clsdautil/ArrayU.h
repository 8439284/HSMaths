//
// Created by clsda on 2024/9/18.
//
//#include "glad/glad.h"
//#include "GLFW/glfw3.h"

#ifndef INC_3D_TEST_ARRAYU_H
#define INC_3D_TEST_ARRAYU_H

class ArrayU {
public:
    template <typename T>
    static T copyArray(const T* oldArr, const T newArr, int length) {
        for (int i = 0; i < length; i ++) {
            oldArr[i] = newArr[i];
        }
        return oldArr;
    }

    template <typename T>
    static int arrayLength(const T* arr) {
//        return (&arr + 1) - arr;
        return sizeof (arr) / sizeof(arr[0]);
    }

//    static void test(do arr[])
};

#endif //INC_3D_TEST_ARRAYU_H
