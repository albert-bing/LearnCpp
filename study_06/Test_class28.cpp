//
// Created by liuxiaobing03 on 2023/10/26.
//

#include "Test_class28.h"
#include "iostream"

using namespace std;

class MyPrint{
public:
    void operator()(string text){
        cout<<text<<endl;
    }
};

class MyAdd{
public:
    // 重载函数符号非常灵活
    int operator()(int a, int b){
        return a+b;
    }
};


void test(){
    MyPrint myPrint;
    myPrint("hello");
}

void test2(){
    MyAdd myAdd;
    int ret = myAdd(10,20);
    cout<<ret<<endl;
    // 使用匿名函数 ,MyAdd() 相当于创建了一个匿名对象，(10,20)相当于调用了匿名对象的仿函数
    cout<<MyAdd()(10,20)<<endl;
}

int main(){
//    test();
    test2();
}
