//
// Created by liuxiaobing03 on 2023/4/5.
//

#include "ForTest.h"
#include "iostream"

int  main(){
    int num = 0;
//    for (int i = 0; i < 10; i++) {
//        std::cout << i << std::endl;
//    }

//    for (int i = 0; i < 100; ++i) {
//        int a = i % 10;
//        int b = i / 10;
//        if(a == 7 || b == 7 || i % 7 == 0){
//            std::cout << i << std::endl;
//            std::cout << "敲桌子" << std::endl;
//        }
//    }
//    for (int i = 0; i < 10; ++i) {
//        for (int j = 0; j < 10; ++j) {
//            std::cout << "*\t" ;
//        }
//        std::cout << "\n" ;
//    }

//    for (int i = 1; i < 10; ++i) {
//        for (int j = 1; j <= i; ++j) {
//            std::cout << j << "*" << i << "=" << i*j << "\t";
//        }
//        std::cout << "\n";
//    }

//    for (int i = 0; i < 10; ++i) {
//        if (i == 5){
//            continue;
//        }
//        std::cout << i << std::endl;
//    }

    std::cout << "1" << std::endl;
    std::cout << "1" << std::endl;

    goto FLAG;

    std::cout << "1" << std::endl;
    FLAG:
    std::cout << "1" << std::endl;

    return 0;
}