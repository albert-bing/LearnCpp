//
// Created by liuxiaobing03 on 2023/10/16.
//

#include "Test_func03.h"
#include "iostream"

using namespace std;

// 结论：引用可以作为重载的条件
void func(int& a){
    cout<<"func(int& a)"<<endl;
}

void func(const int& a){
    cout<<"func(const int& a)"<<endl;
}

// 结论：有默认参数时候的重载要注意避免出现可以同时调用
void func01( int a,int b=20){
    cout<<"func(const int& a)"<<endl;
}
void func01( int a ){
    cout<<"func(const int& a)"<<endl;
}

int main(){
    int a =10;
    // 调用的是void func(int& a)，因为目前传递的是引用，
    // 可以做修改，而void func(const int& a)则是做了常量限制，所以会调用void func(int& a)
    func(a);
    // 会调用void func(const int& a)，因为直接传一个常量值，
    // 而void func(const int& a)则是做了一层转化，const int& a --> int b = 10;const int &a = b;
    func(10);

    // func01(10); // 会报错,原因是两个函数的参数在传递一个参数的时候都满足调用条件。但是传递两个参数时候，不会报错。
}