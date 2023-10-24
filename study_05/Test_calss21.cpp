//
// Created by liuxiaobing03 on 2023/10/24.
//

#include "Test_calss21.h"
#include "iostream"

using namespace std;

class Building;
class GoodGay{
public:
    GoodGay();
public:
    Building * m_pBuliding;
    void visit();
};

class Building{
    //GoodGay 是friend的友元类，允许访问
    friend class GoodGay;
public:
    Building();
public:
    string m_Sittingroom;
private:
    string m_Bedroom;
};
// 类外实现
Building::Building(){
    m_Sittingroom = "客厅";
    m_Bedroom = "卧室";
}
GoodGay::GoodGay(){
    m_pBuliding = new Building();
}
// 类外实现
void GoodGay::visit(){
    cout << "Building=" << m_pBuliding->m_Sittingroom << endl;
    cout << "Building=" << m_pBuliding->m_Bedroom << endl;
}

// 测试

void test01(){
    GoodGay goodGay;
    goodGay.visit();
}

int main(){
    test01();
}