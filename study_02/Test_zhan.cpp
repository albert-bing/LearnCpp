//
// Created by liuxiaobing03 on 2023/10/10.
//

#include "Test_zhan.h"
#include "iostream"

using namespace std;

int * func(){
    int a = 10;
    return &a;
}

int main(){
    int * p = func();

    cout<<*p << endl; // 输出10
    cout<<*p << endl;  // 输出乱码
}