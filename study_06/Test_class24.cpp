//
// Created by liuxiaobing03 on 2023/10/25.
//

#include "Test_class24.h"
#include "iostream"

using namespace std;

class Person{
public:
    int m_a;
    int m_b;
};

// 全局函数重载左移运算符
ostream& operator<<(ostream &cout, Person &p){
    cout <<"m_a=" << p.m_a <<" m_b=" << p.m_b;
    return cout;
}

void test01(){
    Person p;
    p.m_a = 10;
    p.m_b = 11;
    // 如果想要链式输出，需要修改重载的返回值为cout
    cout <<  p << endl;
}

int main(){
    test01();
}