//
// Created by liuxiaobing03 on 2023/10/13.
//

#include "Test_func01.h"
#include "iostream"

using namespace std;

int func(int a,int b,int c=10){
    // 参数里面只要有一个参数有默认值，那么它之后的左右的参数也必须有默认值
    return a+b+c;
}
// 如果一个函数声明的时候有默认参数，那么实现的时候就不能有默认参数了，反之亦然。实现的函数有了默认参数，声明就不能有了
int func2(int a = 10,int b = 20);

int func2(int a,int b){
    return a+b;
}

int func3(int a,int){
    cout << "func3\n";
}

int main(){
    int res = func(1,2,3); // 6
    int res1 = func(1,2); // 13
    cout<<res<<endl;

    func3(10,10);
}