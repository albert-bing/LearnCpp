//
// Created by liuxiaobing03 on 2023/10/12.
//

#include "Test_yinyong01.h"
#include "iostream"

using namespace std;

int main(){
    int a = 10;
    cout<<a<<endl; // 10
    int &b = a;
    b = 20;
    cout<<b<<endl; // 20
    cout<<a<<endl; // 20

}