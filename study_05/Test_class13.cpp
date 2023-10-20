//
// Created by liuxiaobing03 on 2023/10/20.
//

#include "Test_class13.h"
#include "iostream"

using namespace std;

class Phone{
public:
    Phone(string name){
        cout<<"phone 构造"<<endl;
        p_name= name;
    }

    ~Phone(){
        cout<<"phone 析构"<<endl;
    }
    string p_name;
};

class Person{
public:

    // Phone m_phone = mPhone
    Person(string name, string mPhone) : m_name(name),m_phone(mPhone) {
        cout<<"person 构造"<<endl;
    }
    ~Person(){
        cout<<"person 析构"<<endl;
    }
    string m_name;
    Phone m_phone;
};

void test01(){
    Person p("xiao","111");
    cout << p.m_name << p.m_phone.p_name << endl;
}

int main(){
    test01();
}