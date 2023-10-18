//
// Created by liuxiaobing03 on 2023/10/16.
//

#include "Test_class03.h"
#include "iostream"

using namespace std;

class Person{
public:
    string name;
protected:
    string car;
private:
    string passwd;

public:
    // 类内的都可以访问
    void func(){
        this->name = "张三";
        this->car = "奔驰";
        this->passwd = "12345";
    }
};

int main(){
    Person person;
    person.name = "张三";
    // person.car = "奔驰"; // 会报错，类外不可以访问
    // person.passwd = "1211"; // 会报错，类外不可以访问
}