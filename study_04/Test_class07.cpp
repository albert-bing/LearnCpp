//
// Created by liuxiaobing03 on 2023/10/17.
//

#include "Test_class07.h"
//#include "Point.h"
#include "Point.cpp"
//#include "Circle.h"
#include "Circle.cpp"
#include "iostream"

using namespace std;

//class Point{
//private:
//    int x; // x坐标
//    int y; //  y坐标
//public:
//    void setX(int x){
//        this->x = x;
//    }
//    int getX(){
//        return this->x;
//    }
//
//    void setY(int y){
//        this->y = y;
//    }
//    int getY(){
//        return this->y;
//    }
//};

//class Circle{
//private:
//    int m_r;// 半径
//    Point m_p; // 圆心
//public:
//    void setM_r(int r){
//        this->m_r = r;
//    }
//    int getM_r(){
//        return this->m_r;
//    }
//
//    void setM_p(Point p){
//        this->m_p = p;
//    }
//    Point getM_p(){
//        return this->m_p;
//    }
//};

void isInCircle(Circle &circle,Point &random){
    int dis =
            (circle.getM_p().getX() - random.getX()) * (circle.getM_p().getX() - random.getX())
            + (circle.getM_p().getY() - random.getY()) * (circle.getM_p().getY() - random.getY());
    int m2 = circle.getM_r() * circle.getM_r();
    if (dis == m2){
        cout << "在圆上" << endl;
    }else if(dis <= m2){
        cout << "在圆内" << endl;
    }else{
        cout << "在圆外" << endl;
    }
}

int main(){
    Circle circle;
    Point  center;
    center.setX(10);
    center.setY(0);
    circle.setM_p(center); // 圆心的坐标

    // 随机点的坐标
    Point random_point;
    random_point.setX(10);
    random_point.setY(10);

    // 设置半径
    circle.setM_r(10);

    isInCircle(circle, random_point);
}