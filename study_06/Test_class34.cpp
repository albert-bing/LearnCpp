//
// Created by liuxiaobing03 on 2023/10/27.
//

#include "Test_class34.h"
#include "iostream"

using namespace std;

class Person{
public:
    int m_age;
    Person(){
        m_age = 20;
    }
};

class Animal{
public:
    int m_age;
    Animal(){
        m_age = 10;
    }
};

class Man:public Person,public Animal{
public:
    Man(){
        m_age = 30;
    }
    int m_age;
};

void test(){
    Man man;
    cout << "man - age ="<< man.m_age << endl;
    cout << "man - age ="<< man.Person::m_age << endl;
    cout << "man - age ="<< man.Animal::m_age << endl;
}
int main(){
    test();
}