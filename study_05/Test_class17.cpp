//
// Created by liuxiaobing03 on 2023/10/23.
//

#include "Test_class17.h"
#include "iostream"

using namespace std;

class Person{
public:
    Person(int age){
        // this指针指向被调用的成员函数所属的对象
        this->age = age;
    }
    int age;

    Person& PersonAddAge(Person &person){
        this-> age += person.age;
        return *this;// 返回对象本身
    }
};

void test01(){
    Person p1(19);
    cout<<"person's age: "<<p1.age<<endl;
}

void test02(){
    Person p1(20);
    Person p2(19);
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout<<"p2's age: "<<p2.age<<endl;
}

int main(){
    // test01();
    test02();
}