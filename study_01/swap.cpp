//
// Created by liuxiaobing03 on 2023/9/8.
//

#include "swap.h"
// 定义函数
void swap(int a,int b){
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return ;
}