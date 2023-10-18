//
// Created by liuxiaobing03 on 2023/10/17.
//

#include "Test_class06.h"
#include "iostream"

using namespace std;

class Cube{
private:
    int len;
    int width;
    int high;

public:
    void setLen(int len){
        this->len = len;
    }
    int getLen(){
        return len;
    }

    void setWidth(int width){
        this->width = width;
    }
    int getWidth(){
        return width;
    }

    void  setHigh(int high){
        this->high = high;
    }
    int getHigh(){
        return high;
    }

    bool isSame(Cube &cb1){
        if(cb1.getLen() == len && cb1.getWidth() == width && cb1.getHigh() == high){
            return true;
        }else{
            return false;
        }
    }
};

bool isSame(Cube &cb1, Cube &cb2){
    if (cb1.getLen() == cb2.getLen() && cb1.getWidth() == cb2.getWidth() && cb1.getHigh() == cb2.getHigh()){
        return true;
    }else{
        return false;
    }
}

int main(){
    Cube  cube1;
    cube1.setLen(10);
    cube1.setWidth(10);
    cube1.setHigh(10);

    Cube  cube2;
    cube2.setLen(10);
    cube2.setWidth(10);
    cube2.setHigh(10);

    bool flag = cube2.isSame(cube1); // 局部函数判断

    bool flag2 = isSame(cube1, cube2); // 全局函数判断


    cout<<"flag is "<<flag<<endl;
}