//
// Created by liuxiaobing03 on 2023/10/18.
//

#include "Test_class09.h"
#include "iostream"

using namespace std;

class Person{
public:
    Person(){
        cout<<"person 的无参构造"<<endl;
    }

    Person(int a){ // 有参构造
        age=a;
    }

    Person(const Person& p){ // 拷贝构造
        age = p.age;
    }

    ~Person(){
        cout<<"person 的析构函数"<<endl;
    }

    int age;
};

// 1.使用一个已经创建完毕的对象来初始化一个新的对象时
void test01(){
    Person p(20);
    Person p1(p);
    cout<<"p1 的age为"<<p1.age<< endl;
}
//2.值传递的方式给函数参数传值
void doWork(Person  p){
    //在值传递的过程中，相当于是拷贝了一份数据，所以在值传递的过程中会调用拷贝函数，
    // 和原来的对象值不是一个，这也就是为啥值传递改变不了原值的原因
}
void test02(){
    Person p(20);
    doWork(p);
}
// 3.以值方式返回局部对象
Person doWork2(){
    Person p(20);
    return p;
}
void test03(){
    // 返回的时候也是创建了一个副本，调用了拷贝函数
    Person p = doWork2();
}
int main(){
    test01();
}