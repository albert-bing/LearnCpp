//
// Created by liuxiaobing03 on 2023/10/20.
//

#include "Test_class14.h"
#include "iostream"

using namespace std;

class Person{
public:
    // 类内声明，类外初始化
    static int m_age;
};
// 类内声明，类外初始化
int Person::m_age = 10;

void test01(){
    // 通过对象访问
    Person p;
    cout << p.m_age << endl;
    // 通过类名访问
    cout << Person::m_age << endl;
}

int main(){
//    Person person;
//    cout << "person.m_age = " << person.m_age << endl;
//    Person person1;
//    person1.m_age = 20;
//    cout << "person1.m_age = " << person1.m_age << endl;
    test01();
}