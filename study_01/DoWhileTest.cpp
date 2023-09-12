//
// Created by liuxiaobing03 on 2023/4/5.
//

#include "DoWhileTest.h"
#include "iostream"

int main(){
//    int num = 10;
//    do {
//        std::cout << num << std::endl;
//        num --;
//    } while (num > 0);
    // 1.先找到所有的三位数
    int num = 100;
    do {
         //2.输出所有的水仙花数
         int a = 0; // 个位
         int b = 0; // 十位
         int c = 0; // 百位
         int d = 0;
         a = num % 10;
         b = num / 10 % 10;
         c = num / 100 % 10;
         d = num / 1000;
         if(a*a*a + b*b*b + c*c*c + d*d*d== num){
             std::cout << num << std::endl;
         }
         num ++;
    } while (num < 10000);

    return 0;
}