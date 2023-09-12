//
// Created by liuxiaobing03 on 2023/9/11.
//

#include "PointAndArr.h"

#include "iostream"
using namespace std;

int main(){
    // 指针和数组
    // 通过指针来访问数组
    int arr[5] = {1,2,3,4,5};
    int * p = arr;// 将指针指向数据的首地址即第一个元素
    cout << *p << endl; // 1
    // 访问数组的第二个元素，只需将指针指向后移动四个字节即可，因为该数组是int类型，每个数据占四个字节
    p++;
    cout << *p << endl; // 2
    // 利用指针遍历数据
    int * p2 = arr;
    for (int i = 0; i < sizeof arr / sizeof arr[0]; ++i) {
        cout << *p2 << endl; // 3
        p2++;
    }
}