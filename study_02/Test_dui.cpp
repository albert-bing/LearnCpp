//
// Created by liuxiaobing03 on 2023/10/10.
//

#include "Test_dui.h"
#include "iostream"

using namespace std;

int * func(){
    int * p = new int(10);
    return p;
}

int main(){
    int * p = func();

    cout << "p:" << *p << endl;
    cout << "p:" << *p << endl;
}