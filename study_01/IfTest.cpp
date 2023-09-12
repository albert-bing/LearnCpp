//
// Created by liuxiaobing03 on 2023/4/5.
//

#include "IfTest.h"

#include <iostream>

int main(){
    int a = 0;
    int b = 0 ;
    int c = 0;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (a > b)
    {
        if(a > c)
        {
            std::cout << "最重的小猪是：" << a << std::endl;
        }
    }
    else {
        if(b > c){
            std::cout << "最重的小猪是：" << b << std::endl;
        }
        else
        {
            std::cout << "最重的小猪是：" << c << std::endl;
        }
    }

    // std::cout << a << "\n" << b <<  "\n" << c << std::endl;

}