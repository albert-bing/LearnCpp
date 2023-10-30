//
// Created by liuxiaobing03 on 2023/10/26.
//

#include "Test_class27.h"
#include "iostream"

using namespace std;

class Person{
public:
    Person(int age,string name){
        this->m_age=age;
        this-> m_name=name;
    }
    // 重载 == 运算符
    bool operator==(Person &person){
        if(this->m_age == person.m_age && this->m_name == person.m_name){
            return true;
        }else{
            return false;
        }
    }
    // 重载!=运算符
    bool operator!=(Person &person){
        if(this->m_age!= person.m_age || this->m_name!= person.m_name){
            return true;
        }else{
            return false;
        }
    }
    int m_age;
    string m_name;
};

void test(){
    Person p1(12,"tom");
    Person p2(13,"tom");
    if(p1 != p2){
        cout << "p1 != p2" << endl;
    }else{
        cout << "p1 == p2" << endl;
    }
}

int main(){
    test();
}