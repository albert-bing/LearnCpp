//
// Created by liuxiaobing03 on 2023/10/16.
//

#include "Test_class01.h"
#include "iostream"

using namespace std;

const double PI = 3.14;

// 定义一个类
class Cirlce{
public: // 设置访问权限
    int mr; // 属性
    double getZC(){ // 行为
        return 2 * mr * PI;
    }
};

int main(){
    Cirlce cl; // 初始化对象
    cl.mr = 30; // 设置属性
    cout << cl.getZC() << endl;
}