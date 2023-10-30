//
// Created by liuxiaobing03 on 2023/10/26.
//

#include "Test_class29.h"

#include "iostream"

using namespace std;

class BaseInfo{
public:
    void head(){
        cout << "BaseInfo-head" << endl;
    }
    void left(){
        cout << "BaseInfo-left" << endl;
    }
    void right(){
        cout << "BaseInfo-right" << endl;
    }
};

// java 类
class JavaInfo : public BaseInfo{
public:
    void content(){
        cout << "JavaInfo-content" << endl;
    }
};

// python 类
class PythonInfo : public BaseInfo{
public:
    void content(){
        cout << "PythonInfo-content" << endl;
    }
};

int main(){
    JavaInfo javaInfo;
    javaInfo.head();
    javaInfo.left();
    javaInfo.right();
    javaInfo.content();
    PythonInfo pythonInfo;
    pythonInfo.head();
    pythonInfo.left();
    pythonInfo.right();
    pythonInfo.content();
}