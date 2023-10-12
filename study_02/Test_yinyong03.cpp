//
// Created by liuxiaobing03 on 2023/10/12.
//

#include "Test_yinyong03.h"
#include "iostream"

using namespace std;

// 引用不可以返回局部变量的引用值
int& test01(){
    int a = 10; // 局部变量存放在栈区域内
    return a;
}

// 函数的调用可以作为左值
int& test02(){
    static int a = 10;
    return a;
}

int main(){
    int& a = test01();
//    cout << a << endl; // 第一次可以输出是一位内存为用户做了一次保存
//    cout << a << endl; // 不能用a的值，因为引用不能返回局部变量的引用值，返回的话会报乱码
//    int& b = test02();
//    cout << b << endl;
//    test02() = 100; // 如果函数的返回值是一个引用，那么函数的返回值可以作为左值，实际就是给函数内的静态值做赋值操作，而b又是静态值的一个别名，所以b再次输出的是100
//    cout << b << endl;

    cout << "------------------------------" << endl;

    int b = 10;
    // 自动转化为 int * const p = &b; 指针常量是指针的指向不可以变，但是指针指向的值可以变
    int &p = b;

    p = 20; // 发现p是一个引用，会自动转化为 *p = 20;
    cout << p << endl;



}