//
// Created by liuxiaobing03 on 2023/10/13.
//

#include "Test_yinyong04.h"
#include "iostream"

using namespace std;

void showValue(const int & a){
    // a = 1000; const 修饰以后，a不可以再修改
    cout<<a <<endl;
}

int main(){
    int a = 10;
    // int & ref = 20; // 引用变量只能接受一块内存地址，不能是一个字面量的常量
    const int & ref = 20; // 加上const以后，实际是系统帮我们做了处理，处理为：int temp = 20; const int & ref = temp;

    showValue(a);
    cout<<"a="<<a <<endl;
}