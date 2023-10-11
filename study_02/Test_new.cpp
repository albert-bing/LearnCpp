//
// Created by liuxiaobing03 on 2023/10/11.
//

#include "Test_new.h"
#include "iostream"

using namespace std;

int * func(){
    int * p = new int(10);
    return p;
}

void test(){
    int * p = func();
    cout << "*p -> " << *p << endl;

    delete p;

    cout<< *p << endl;
}

int main(){
//    int * p = new int(10);
//
//    cout<<"*p -> " << *p << endl;
//
//    delete p;
//
//    cout<< p << endl;

     int * arr = new int[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = i;
    }
     for(int i = 0; i < 10; i++){
         cout<<"*arr ->"<<arr[i]<<endl;
     }

     delete[] arr;

    for(int i = 0; i < 10; i++){
        cout<<"*arr ->"<<arr[i]<<endl;
    }



}