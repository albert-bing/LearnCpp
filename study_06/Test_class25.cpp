//
// Created by liuxiaobing03 on 2023/10/25.
//

#include "Test_class25.h"
#include "iostream"

using namespace std;

class MyInitger{
   friend ostream &operator<<(ostream &os, const MyInitger &initger);
public:
    MyInitger() {
       m_age = 0;
    }
    // 重载前置递增 ++
    /**
     * 返回对象引用的原因：因为用户可以对返回的值做重复操作，例如++(++initger),该操作应该始终对一个对象的属性进行操作。
     * 如果返回的是一个新的对象，那么第二次输出++以后，不在是原来的对象，而是新的对象。对导致两次的值不一致。
     * @return
     */
    MyInitger& operator++() {
        m_age++;
        return *this;
    }
    // 重载后置递增 ++
    // operator++(int) int 用来区分前置递增还是后置递增
    // 这里不返回 MyInitger& 的原因是因为：temp是一个局部变量，返回一个局部变量的引用会导致程序报错，因为局部变量的在函数调用完就会释放
    MyInitger operator++(int) {
        // 先保存一份原来的值
        MyInitger temp =  *this;
        // 加操作
        m_age++;
        // 返回原来的值
        return temp;
    }
private:
    int m_age;
};

ostream &operator<<(ostream &os, const MyInitger &initger) {
    os << initger.m_age;
    return os;
}

void test01(){
    MyInitger initger;
    cout << ++(++initger) << endl;
    cout << initger << endl;
    MyInitger initger2;
    cout << initger2++ << endl;
    cout << initger2 << endl;
}

int main(){
    test01();
//    int a = 10;
//    cout << ++a << endl;
//    cout << a << endl;
//    int b = 20;
//    cout  << b++ << endl;
//    cout  << b << endl;
}