//
// Created by liuxiaobing03 on 2023/4/6.
//

#include "ArrayTest1.h"
#include "iostream"

int main(){
    int arr[5];

    int arr2[3] = {1,2,};

    int arr3[4] = {100,201,103,400};
    // 获取数组的占用的内存大小
    std::cout << sizeof arr3 << std::endl;
    // 获取数据的长度
    std::cout << sizeof arr3 / sizeof arr3[0] << std::endl;
    // 获取数组的首地址
    std::cout << arr3 << std::endl;
    // 获取数组的元素的大小
    std::cout << sizeof arr3[0] << std::endl;
    // 获取数组的某个元素的地址
    std::cout << &arr3[0] << std::endl;

    int  max = 0;
    for (int i = 0; i < (sizeof(arr3) / sizeof arr3[0]); ++i) {
        if(max < arr3[i]){
            max = arr3[i];
        }
    }
    std::cout << max << std::endl;

    int arr4[5] = {1,2,3,4,5};
    int start = 0;
    int end = sizeof arr4 / sizeof arr4[0] -1;
    while (start < end){
        int temp = arr4[start];
        arr4[start] = arr4[end];
        arr4[end] = temp;

        start++;
        end --;
    }
    for (int i = 0; i < 5; ++i) {
        std::cout << arr4[i] << std::endl;
    }

    std::cout << "---------------" << std::endl;

    int arr5[9] = {2,3,6,7,8,1,9,4,5};
    for (int i = 0; i < 9 - 1; ++i) {
        for (int j = 0; j < 9 - i - 1; ++j) {
            if (arr5[j] > arr5[j+1]){
                int temp = arr5[j];
                arr5[j] = arr5[j+1];
                arr5[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < 9; ++i) {
        std::cout << arr5[i];
    }

}