//
// Created by liuxiaobing03 on 2023/10/25.
//

#include "Test_class23.h"
#include "iostream"

using namespace std;

class Person{
public:
    int m_a;
    int m_b;
    // 普通成员函数实现
    Person personAdd(Person &person ){
        Person temp;
        temp.m_a = person.m_a + m_a;
        temp.m_b = person.m_b + m_b;
        return temp;
    }
    // 重载加号的成员函数实现
//    Person operator+(Person &person){
//        Person temp;
//        temp.m_a = person.m_a + m_a;
//        temp.m_b = person.m_b + m_b;
//        return temp;
//    }
};

// // 重载加号的全局函数实现
Person operator+(Person &person1, Person &person2){
    Person temp ;
    temp.m_a = person1.m_a + person2.m_a;
    temp.m_b = person1.m_b + person2.m_b;
    return temp;
}

void test01(){
    Person person1;
    person1.m_a = 10;
    person1.m_b = 20;
    Person person2;
    person2.m_a = 20;
    person2.m_b = 20;
    // 普通实现
    Person person3 = person1.personAdd(person2);

//    cout<<"person3.m_a = "<<person3.m_a<<endl;
//    cout<<"person3.m_b = "<<person3.m_b<<endl;
    // 成员函数重载实现
//    Person person4 = person1 + person2;
//    cout<<"person4.m_a = "<<person4.m_a<<endl;
//    cout<<"person4.m_b = "<<person4.m_b<<endl;
    // 全局函数实现
    // 本质的调用原则
    // Person person5 = person1.personAdd(person2);
    Person person5 = person1 + person2;
    cout<<"person5.m_a = "<<person5.m_a<<endl;
    cout<<"person5.m_b = "<<person5.m_b<<endl;
}

int main(){
    test01();
}