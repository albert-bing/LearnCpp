//
// Created by liuxiaobing03 on 2023/10/19.
//

#include "Test_class10.h"
#include "iostream"

using namespace std;

class Person{

public:
    // 如果手动指定了有参构造函数，则编译器不在指定默认的无参构造
//    Person(){
//        cout<<"person 无参构造函数"<<endl;
//    }

    Person(int n){
        cout<<"person 有参构造函数"<<endl;
        age = n;
    }
    // 拷贝函数,拷贝函数如果不指定的话，就是将原来的属性值做一个拷贝
//    Person(const Person& other){
//        cout<<"person 拷贝函数"<<endl;
//        age = other.age;
//    }

    // 析构函数
    ~Person(){
        cout<<"person 的析构函数"<<endl;
    }

    int age;
};

void test01(){
    Person p1(20);
    Person p2(p1);
    cout<<"p2 的age="<<p2.age<<endl;
}

int main(){
    test01();
}