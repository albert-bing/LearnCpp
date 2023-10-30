//
// Created by liuxiaobing03 on 2023/10/27.
//

#include "Test_class32.h"
#include "iostream"

using namespace std;

class Person{
public:
    Person(){
        m_age = 30;
    }

    void func(){
        cout << "person - func " << m_age << endl;
    }
    void func(int a){
        cout << "man - func(int a) " << m_age << endl;
    }
    int m_age;
};

class Man:public Person{
public:
    Man(){
        m_age = 10;
    }
    void func(){
        cout << "man - func " << m_age << endl;
    }

    int m_age;
};

void test01(){
    Man m;
    cout<<"man.m_age= " << m.m_age<<endl;
    cout<<"person.m_age= " << m.Person::m_age<<endl;
    m.func();
    m.Person::func();
    m.Person::func(10);
}

int main(){
    test01();
}
