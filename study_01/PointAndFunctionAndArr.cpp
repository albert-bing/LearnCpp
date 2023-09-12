//
// Created by liuxiaobing03 on 2023/9/12.
//

#include "PointAndFunctionAndArr.h"
#include "iostream"
using namespace std;
//void bubbleArr(int arr[],int len)
void bubbleArr(int * arr,int len){
    for(int i=0;i<len-1;i++){
        for (int j = 0; j < len -i -1; j++) {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArr(int* arr,int len){
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << " ";
    }
}

int main(){
    // 创建一个数组
    int arr[] = {3,4,2,1,7,6,5,9,8};
    // 数组长度
    int len = sizeof arr / sizeof *arr;
    // 冒泡排序 数据首地址和数组长度
    bubbleArr(arr,len);
    // 打印数据
    printArr(arr, len);

}