//
// Created by liuxiaobing03 on 2023/10/27.
//

#include "Test_class31.h"
#include "iostream"

using namespace std;

class Base{
public:
    Base(){
        cout << "Base 构造" << endl;
    }
    ~Base(){
        cout << "Base 析构" << endl;
    };
};

class Son : Base{
public:
    Son(){
        cout << "Son 构造" << endl;
    }
    ~Son(){
        cout << "Son 析构" << endl;
    }
};

void test(){
//    Base b;
    Son son;
}

int main(){
    test ();
}