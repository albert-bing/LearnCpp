//
// Created by liuxiaobing03 on 2023/9/8.
//

#include "iostream"
using namespace std;

// 函数声明
int max(int a,int b);

int main(){
   int res = max(5,6);
   cout << res << endl;
}

// 函数的定义
int max(int a, int b){
    return a > b? a : b;
}
