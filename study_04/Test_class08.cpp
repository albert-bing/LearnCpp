//
// Created by liuxiaobing03 on 2023/10/18.
//

#include "Test_class08.h"
#include "iostream"

using namespace std;

class Person{
    public:
    // 无参构造
    Person(){
        cout<<"Person constructor"<<endl;
    }
    // 有参构造
    Person(int a){
        age = a;
        cout<<"P2" << age <<endl;
    }
    // 拷贝构造
    Person(const Person& p){
        age = p.age;
        cout<< "p3" << age<<endl;
    }

    ~Person(){
        cout<<"Person destructor"<<endl;
    }
    int age;
};

int main(){
    // 调用
    // 括号法
    Person p1; // 默认构造函数调用
    Person p2(10); // 有参构造函数调用
    Person p3(p2); // 拷贝构造函数调用

    // 显示法
    Person p4;
    Person p5 = Person(20);// 有参构造函数调用
    Person p6 = Person(p5);// 拷贝构造函数调用

    Person(20); // 匿名对象，在执行完之后，会立刻释放
    // 注意事项： 不要使用拷贝函数初始化匿名对象，因为会被程序误认为是实例化一个对象
    // Person(p6); // Person(p6);  ==== 等价于 === Person p6;


    // 隐式转化法
    Person p7 = 10; // 调用的有参构造
    Person p8 = p7; // 调用的拷贝构造

}