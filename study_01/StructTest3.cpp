//
// Created by liuxiaobing03 on 2023/9/26.
//

#include "StructTest3.h"
#include "iostream"

using namespace std;

// 英雄结构体
struct Hero {
    string name;
    int age;
    string sex;
};
// 排序
void printhero(Hero hero1[]) {
    for (int i = 0; i < 5; ++i) {
        Hero heroTmp ;
        for (int j = 0; j < 5 - i - 1; ++j) {
            if(hero1[j].age > hero1[j+1].age){
                heroTmp = hero1[j];
                hero1[j] = hero1[j+1];
                hero1[j+1] = heroTmp;
            }
        }
    }

    for (int i = 0; i < 5; ++i) {
        cout << "姓名:" <<  hero1[i].name << "年龄：" << hero1[i].age << "性别：" << hero1[i].sex << endl;
    }
}
int main(){
    // 初始化数组，存放五位英雄
    Hero arrHeros[5] = {
            { "张三", 23, "男" },
            { "李四", 22, "女" },
            { "王五", 25, "男" },
            { "李六", 24, "女" },
            { "张四", 18, "男" }
    };
    // 对年龄进行排序输出
    printhero(arrHeros);
}