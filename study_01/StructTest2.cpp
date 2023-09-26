//
// Created by liuxiaobing03 on 2023/9/26.
//

#include "StructTest2.h"
#include "iostream"
using namespace std;

struct Student{
    string sname;
    int score;
};

// 老师结构体
struct Teacher{
    string tname;
    struct Student sArray[5]; // 学生信息
};

// 初始化信息
void allocateInfo(struct Teacher teacher[],int len){
    string seedname = "ABCDE";
    for (int i = 0; i < len; ++i) {
        teacher[i].tname = "teacher_";
        teacher[i].tname += seedname[i];

        // 生成学生信息
        for (int j = 0; j < 5; ++j) {
            teacher[i].sArray[j].sname = "student_";
            teacher[i].sArray[j].sname += seedname[j];
            teacher[i].sArray[j].score = rand() % 61 + 40;
        }
    }
}

//打印所有信息
void printInfo(struct Teacher teacher[],int len){
    for (int i = 0; i < len; ++i) {
        cout << "老师姓名：" << teacher[i].tname << endl;

        for (int j = 0; j < 5; ++j) {
            cout << "学生姓名：" <<teacher[i].sArray[j].sname << "学生分数：" << teacher[i].sArray[j].score<< endl;
        }
    }
}
int main(){

    // 增加随机数种子
    srand((unsigned int)time(NULL));
    // 创建老师的结构体数据
    struct Teacher teacher1[3];

    // 初始化老师和学生的信息
    int len = sizeof teacher1 / sizeof teacher1[0];
    allocateInfo(teacher1,len);

    // 打印所有信息
    printInfo(teacher1,len);

}