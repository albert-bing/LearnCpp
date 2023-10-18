//
// Created by liuxiaobing03 on 2023/10/17.
//
#include "iostream"

using namespace std;
#ifndef LEARN_CIRCLE_H
#define LEARN_CIRCLE_H
#include "Point.h"

class Circle{
private:
    int m_r;// 半径
    Point m_p; // 圆心
public:
    void setM_r(int r);
    int getM_r();

    void setM_p(Point p);
    Point getM_p();
};


#endif //LEARN_CIRCLE_H
