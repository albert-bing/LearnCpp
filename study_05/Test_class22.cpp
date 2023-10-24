//
// Created by liuxiaobing03 on 2023/10/24.
//

#include "Test_class22.h"
#include "iostream"

using namespace std;

class Building;

class GoodGay{
public:
    GoodGay();
    Building * m_Building;

    void visit();// 让visit可以访问building中的自有变量
    void visit2();// 让visit2不可以访问building中的自有变量
};

class Building{
    // 给GoodGay的visit函数增加关键字friend，使得GoodGay的visit函数可以访问Buidling中的m_Bedroom私有变量
    friend void GoodGay::visit();
public:
    Building();
public:
    string m_Sittingroom;
private:
    string m_Bedroom;
};

Building::Building(){
    m_Sittingroom = "东门";
    m_Bedroom = "北门";
}

GoodGay::GoodGay(){
    m_Building = new Building();
}

void GoodGay::visit() {
    cout << m_Building->m_Sittingroom << endl;
    cout << m_Building->m_Bedroom << endl;
}

void GoodGay::visit2() {
    cout << m_Building->m_Sittingroom << endl;
    // cout << m_Building->m_Bedroom << endl; // 会报错，不可以访问
}
void test01(){
    GoodGay goodGay;
    goodGay.visit();
    goodGay.visit2();
}
int main(){
    test01();
}