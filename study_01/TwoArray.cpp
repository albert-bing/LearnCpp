//
// Created by liuxiaobing03 on 2023/4/8.
//

#include "TwoArray.h"
#include "iostream"

int main(){
//    int nums[2][3] = {{1,2,3},{4,5,6}};
//    for (int i = 0; i < 2; ++i) {
//        for (int j = 0; j < 3; ++j) {
//            std::cout << nums[i][j] ;
//        }
//        std::cout << "\n";
//    }

    int scores[3][3] = {{100,100,100},{99,98,70},{56,67,78}};
    for (int i = 0; i < 3; ++i) {
        int score = 0;
        for (int j = 0; j < 3; ++j) {
            score += scores[i][j];
        }
        std::cout << score << " \n" << std::endl;
    }
}