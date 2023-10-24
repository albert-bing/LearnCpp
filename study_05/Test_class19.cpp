//
// Created by liuxiaobing03 on 2023/10/24.
//

#include "Test_class19.h"
#include "iostream"

using namespace std;

class Person{
public:

    // 加了const以后就不可以修改属性值了
    /**
     * 不可修改的原因：
     * 因为this指针相当于是指针常量  Person *p const this;
     * 根据指针常量的规则，是不可以修改指针的指向,只可以修改指针指向的值
     * 而加上const以后就变成了 const Person *p const this;
     * 这样的话，就是连指针指向的值也不可以修改了。
     * 注意：在成员函数后面加上const以后，修饰的其实是this指针。
     */
    // 常函数
    void showPerson()  const
    {
        // this->m_Age = 100;
        m_B = 100;
    }

    void func(){

    }

    int m_Age;
    mutable int m_B;// 特殊变量，可以在常函数中修改值
};

// 常函数测试
void test01(){
    Person p;
    p.showPerson();
}

// 常对象
void test02(){
   const Person p2{};// 常对象，在新建对象前加const，即为常对象
   p2.showPerson();
//   p2.m_Age = 100; // 不可以修改
//   p2.func();// 不可以修改,常对象只能调用常函数
   p2.m_B = 100; // 可以修改
}

int main(){

}