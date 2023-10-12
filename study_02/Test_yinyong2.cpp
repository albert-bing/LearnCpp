//
// Created by liuxiaobing03 on 2023/10/12.
//

#include "Test_yinyong2.h"
#include "iostream"
using namespace std;

// 值传递
void swap01(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}
// 指针传递
void swap02(int * a,int * b){
    int temp = *a;
    *a = *b;
    *b =temp;
}
// 引用传递
void swap03(int &a,int &b){
    int temp = a;
    a = b;
    b =temp;
}
int main(){
    int a = 10;
    int b = 20;
//    swap01(a,b); // 值传递，形参无法修饰实参
//    swap02(&a,&b); // 指针传递，形参可以修饰实参
    swap03(a,b);//引用传递，形参可以修饰实参
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}