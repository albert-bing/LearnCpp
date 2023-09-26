//
// Created by liuxiaobing03 on 2023/9/12.
//

#include "structTest.h"
#include<iostream>

using namespace std;

// 定义结构体
struct Student{
    string name;
    int age;
    int score;
}s3;

struct Teacher{
    int id;
    string name;
    int age;
    struct Student student;
};

// 值传递
void printStruct(struct Student s){
    cout << s.name << " " << s.age << " " << s.score << endl;
}
// 地址传递
void printStructPoint(struct Student *s){
    s->name = "maqi";
    cout << s->name << " " << s->age << " " << s->score << endl;
}

void printStructPoint2(const Student *s){
    // s->name = "maqi";  会报错，为了防止误操作
    cout << s->name << " " << s->age << " " << s->score << endl;
}

int main(){
    // 初始化结构1
    struct Student student1;
    student1.name = "liuxiaobing03";
    student1.age = 20;
    student1.score = 100;


    struct Student student2 = {"lisi",20,100};


    s3.name = "wangwu";
    s3.age = 10;
    s3.score = 100;

    // 函数参数使用
    struct Student student30 = {"lisi",10,100};
    printStruct(student30);
    printStructPoint(&student30);


    // 结构体嵌套
    // 初始化方式一
    struct Teacher teacher1 = {1,"lisi",60,{"zhangan",20,100}};
    // 初始化方式二
    struct Teacher teacher2;
    teacher2.id = 1;
    teacher2.name = "lisi";
    teacher2.age = 60;
    teacher2.student.age = 20;
    teacher2.student.score = 100;
    teacher2.student.name = "zhangan";

    //结构体指针
    struct Student student3 = {"lisi",10,100};
    struct Student * p = &student3;

//    cout << p ->name << p -> age << p -> score << endl;

    // 定义结构体数组
    struct Student stuArray[3] = {
            {"lisi",10,100},
            {"zhangsan",20,200},
            {"zhaoliu",30,300}
    };

    // 修改结构体数据中的数据
    stuArray[2].age = 50;
    // 打印结构体数组
//    for (int i = 0; i < 3; ++i) {
//        cout << stuArray[i].name << "," << stuArray[i].age << "," << stuArray[i].score << endl;
//    }

}