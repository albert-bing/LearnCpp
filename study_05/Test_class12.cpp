//
// Created by liuxiaobing03 on 2023/10/20.
//

#include "Test_class12.h"
#include "iostream"

using namespace std;

class Person{
public:
    //传统方法定义
//    Person(int a,int b,int c){
//        m_a= a;
//        m_b= b;
//        this->m_c= c;
//    }
    // 构造函数列表
    Person(int a,int b,int c):m_a(a),m_b(b),m_c(c){

    }

    int m_a;
    int m_b;
    int m_c;
};


int main(){
    Person p(1,2,3);
    cout << p.m_a << endl;
    cout << p.m_b << endl;
    cout << p.m_c << endl;
}