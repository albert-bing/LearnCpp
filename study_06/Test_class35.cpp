//
// Created by liuxiaobing03 on 2023/10/27.
//

#include "Test_class35.h"
#include "iostream"

using namespace std;

class Animal{
public:
    int m_age;
};
// 该类为虚继承类
class Sheep:virtual public Animal{};

class Tuo:virtual  public Animal{};

class SheepTuo:public Sheep,public Tuo{}; // Sheep -> Tuo -> SheepTuo

void test01(){
    SheepTuo tuo1;
    tuo1.Sheep::m_age = 25;
    tuo1.Tuo::m_age = 22;
    // 虚继承以后，所有的类使用的同一个数据
    cout<<tuo1.m_age<<endl;
    cout<<"tuo1.Sheep::m_age = " << tuo1.Sheep::m_age<<endl;
    cout<<"tuo1.Tuo::m_age = " << tuo1.Tuo::m_age<<endl;
    /**
     * 虚基类的详解：
     *
     */

}

int main(){
    test01();
}