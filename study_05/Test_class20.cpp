//
// Created by liuxiaobing03 on 2023/10/24.
//

#include "Test_class20.h"
#include "iostream"

using namespace std;

class Building{
    // 申明全局友元函数
    friend void GoodFriend(Building *building);
public:
    Building(){
        this->m_Sittingroom = "客厅";
        this->m_Bathroom = "卧室";
    }

public:
    string m_Sittingroom;
private:
    string m_Bathroom;
};

void GoodFriend(Building *building)
{
    cout<<"GoodFriend" << building->m_Sittingroom <<endl;
    cout<<"GoodFriend" << building->m_Bathroom <<endl;
}

void test01(){
    Building building;
    GoodFriend(&building);
}

int main(){
    test01();
}