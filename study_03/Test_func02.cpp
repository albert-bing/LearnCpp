//
// Created by liuxiaobing03 on 2023/10/16.
//

#include "Test_func02.h"
#include "iostream"

using namespace std;

void func01(){
    cout << "Hello World!func01" << endl;
}
void func01(int a){
    cout << "Hello World! func01(int a)" << endl;
}

void func01(int a,int b){
    cout << "Hello World! func01(int a,int b)" << endl;
}
int main(){
    func01(10,20);
}