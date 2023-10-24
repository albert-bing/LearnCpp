//
// Created by liuxiaobing03 on 2023/10/23.
//

#include "Test_class18.h"
#include "iostream"

using namespace std;

class Person{
public:
    void showPerson(){
        cout << "show person" << endl;
    }
    void showAge(){
        // 为了避免以下错误一般会做一下判断
        if(this->m_Age == NULL){
            return;
        }
        // 报错的原因是创建了一个空指针，却要访问一个空指针的成员变量，所以报错
        cout << "show age=" << this->m_Age << endl;
    }

    int m_Age;
};

void test01(){
    Person *p = NULL;
    p->showAge();
//    p->showPerson();
}

int main(){
    test01();
}