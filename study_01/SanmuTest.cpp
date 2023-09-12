//
// Created by liuxiaobing03 on 2023/4/5.
//

#include "iostream"

int main(){
    int a = 10;
    int b = 100;
    int c = 0;

   c = a > b ? a : b;
   std::cout << c << std::endl;
    char ch = 'a';
    char cd = 'q';
    switch (ch) {
        case 'a': cd = 'a';
            break;
        case 'b':cd = 'b';
            break;
        default: cd = 'z';
    }
    std::cout << cd << std::endl;

}