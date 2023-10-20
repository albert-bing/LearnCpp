//
// Created by liuxiaobing03 on 2023/10/20.
//

#include "Test_class11.h"
#include "iostream"

using namespace std;

class Person{
public:
    Person(){
        cout << "person 无参构造" << endl;
    }

    Person(int i,int h){
        cout << "person 有参函数" << endl;
        age = i;
        high = new int(h);
    }

    Person(const Person& p){
        cout << "person 拷贝函数" << endl;
        age = p.age;
        // high = p.high; // 编译器默认做的事情
        // 深拷贝自己实现
        high = new int(*p.high);
    }

    ~Person(){
        // 将堆区开辟的数据进行释放
        if(high!= NULL){
            delete high;
            high = NULL;
        }
        cout << "person 析构函数" << endl;
    }

    int age;
    int *high;
};

void test01(){
    Person p(10,180);
    cout<<"age: "<<p.age << "身高为：" << *p.high <<endl;
    Person p2(p);
    cout<<"age2: "<<p2.age << "身高为：" << *p2.high<<endl;
}

int main(){
    test01();
}