//
// Created by liuxiaobing03 on 2023/10/20.
//

#include "Test_class15.h"
#include "iostream"

using namespace std;

class Person{
public:
    static void func(){
        m_age = 100; // 静态成员函数是可以访问静态成员变量的
        // t_age = 100;// 静态成员函数是不可以访问非静态成员变量的
        cout << "静态成员函数的调用" << endl;
    }

    static int m_age;// 静态成员变量
    int t_age;
};

int Person::m_age = 0;

void test01(){
    Person person;
    person.func();
    Person::func();
    cout << person.m_age <<endl;
}

int main(){
    test01();
}