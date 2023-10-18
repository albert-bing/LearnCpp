//
// Created by liuxiaobing03 on 2023/10/16.
//

#include "Test_class02.h"
#include "iostream"

using namespace std;

class Student{
    public:
    string name;
    string number;

    // set方法进行赋值
    void  setName(string name){
        this->name = name;
    }
    void  setNumber(string number){
        this->number = number;
    }

    // 展示属性
    void  showName(){
        cout << this->name << endl;
        cout << this->number << endl;
    }

};

int main(){
    Student student;
    student.setName("liuxiaobing03");
    student.setNumber("123456");
    student.showName();
}