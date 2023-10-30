//
// Created by liuxiaobing03 on 2023/10/27.
//

#include "Test_class33.h"
#include "iostream"

using namespace std;

class Person{
public:
    static int m_age;
    static void func(){
        cout << "Person::func" << endl;
    }
};

int Person::m_age = 10;

class Man : public Person{
public:
    static int m_age;
    static void func(){
        cout << "Man::func" << endl;
    }
};

int Man::m_age = 20;

void test01(){
    Man man;
    cout<<"The age of man is "<<man.m_age<<endl;
    cout<<"The age of person is "<<man.Person::m_age<<endl;

    cout<<"The age of person is "<<Man::m_age<<endl;
    // 第一个:: 表示类名的访问，第二个:: 表示继承中的类的作用域
    cout<<"The age of person is "<<Man::Person::m_age<<endl;

    Man::func();
    Man::Person::func();
}

int main(){
    test01();
}