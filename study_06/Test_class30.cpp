//
// Created by liuxiaobing03 on 2023/10/27.
//

#include "Test_class30.h"

#include "iostream"

using namespace std;

class Person{
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};

class Man : public Person{
public:
    int m_d;
};

void test(){
    // 打印的大小为 16，原因是：子类会继承父类的所有的非静态的成员属性，包括私有熟悉，但是私有属性不能访问
    cout << sizeof (Man)<<endl;
}

int main(){
    test();
}