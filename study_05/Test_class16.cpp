//
// Created by liuxiaobing03 on 2023/10/23.
//

#include "Test_class16.h"
#include "iostream"

using namespace std;

class Person{
    int m_age; // 非静态成员变量,属于对象上的数据
    static int m_age2; // 静态成员变量,不属于对象上的数据
    void func(){} // 静态成员变量,不属于对象上的数据
    static void func2(){} // 静态成员变量,不属于对象上的数据
};

int Person::m_age2 = 40;

void test(){
    Person p;
    // 输出结果为： person 对象的大小：1
    // c++中，空对象也会被分配一个字节的内存，用来做区分，每一个空对象也是一个独一无二的内存对象
    cout << "person 对象的大小："<< sizeof p << endl;
}

void test02(){
    Person p;
    // person 对象的大小：4
    cout << "person 对象的大小："<< sizeof p << endl;
}

int main(){
//    test ();
    test02 ();
}