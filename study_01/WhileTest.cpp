//
// Created by liuxiaobing03 on 2023/4/5.
//

#include "WhileTest.h"
#include "iostream"
#include "ctime"

int main(){
//    int a = 10;
//    while (a > 0){
//        std::cout << a << std::endl;
//        a --;
//    }
    // 随机种子，使得随机数每次都随着时间而变化
    srand((unsigned int)time(NULL));
    bool flag = true;
    std::cout << "请输入数字:"<< std::endl;
    int num = 0;
    int od = rand() % 100 + 1;
    std::cout << od << std::endl;
    std::cin >> num ;
    while (flag){
        if (num < od){
            std::cout << "小了,请重新输入：" << std::endl;
            std::cin >> num;
        }
        else if(num > od)
        {
            std::cout << "大了,请重新输入：" << std::endl;
            std::cin >> num;
        } else{
            std::cout << "猜对了" << std::endl;
            flag = false;
        }
    }
}
