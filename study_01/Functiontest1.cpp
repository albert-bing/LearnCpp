//
// Created by liuxiaobing03 on 2023/4/8.
//

#include "Functiontest1.h"

#include "iostream"
using namespace std;

// 定义函数
int sum(int a,int b){
    return a+b;
}

void  swap(int a1,int b1){
    cout << "a1=" << a1 << endl;
    cout << "b1=" << b1 << endl;

    cout << "交换后：\n";

    int temp = a1;
    a1 = b1;
    b1 = temp;

    cout << "a1=" << a1 << endl;
    cout << "b1=" << b1 << endl;

    return ;
}

int main(){
    int a= 10;
    int b = 20;
    // 使用函数
    int s = sum(a,b);
//    cout << s << endl;

    swap(a,b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}

