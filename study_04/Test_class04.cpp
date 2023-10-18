//
// Created by liuxiaobing03 on 2023/10/16.
//

#include "Test_class04.h"
#include "iostream"

using namespace std;

class C1{
    int num;// 默认权限是私有
};

struct C2{
    int num;// 默认权限是公共
};

int main(){

    C1 c1;
    // c1.num = 10; // 不可以访问c1.num
    C2 c2;
    c2.num = 10; // 可以访问c2.num
}