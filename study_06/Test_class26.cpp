//
// Created by liuxiaobing03 on 2023/10/26.
//

#include "Test_class26.h"
#include "iostream"

using namespace std;

class Person{
public:
    Person(int age){
        m_age = new int(age);
    }
    ~Person(){
        if (m_age != NULL){
            delete m_age;
            m_age = NULL;
        }
    }
    // 重载赋值运算符
    Person& operator=(Person& person){
        // 如果原来的对象有值，先释放
        if (m_age!= NULL){
            delete m_age;
            m_age = NULL;
        }
        // 深拷贝
        m_age = new int(*person.m_age);
        // 如果没有返回值，则不能实现连等的操作，类似 a=b=c
        return *this;
    }
    // 创建在堆区的数据需要我们手动创建和释放
    int *m_age;
};

void test01(){
    Person p1(20);
    cout<<*p1.m_age<<endl;
    // 会报错，因为在p1运行完之后就被释放了，而无法给p2赋值
    Person p2(18);
    p2 = p1;
    cout<<*p2.m_age<<endl;
    Person p3(22);
    p3 = p2 = p1;
    cout<<*p3.m_age<<endl;
}

int main(){
    test01();
}