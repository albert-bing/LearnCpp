//
// Created by liuxiaobing03 on 2023/4/3.
//

#include "Operation.h"

#include <iostream>

int main(){
    int num = 10;
//    std::cin >> num;
//    std::cout << "num=" << num << std::endl;

    int n = 10;
    n += 2; // n = n +2
    std::cout << n << std::endl;

    n = 10;
    n -=2; // n = n -2
    std::cout << n << std::endl;

    n = 10;
    n *= 2;// n = n  * 2
    std::cout << n << std::endl;

    n = 10;
    n /= 2; // n = n / 2
    std::cout << n << std::endl;

    n = 10;
    n %= 2; // n = n % 2
    std::cout << n << std::endl;

    int a = 10;
    int b = 20;
    std::cout << (a==b) << std::endl;
    return 0;
}