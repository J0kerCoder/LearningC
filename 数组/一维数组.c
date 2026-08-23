#include <stdio.h>

int main() {
    //数组不完全初始化
    int arr[10]={1,2,3,4,5};
    //一维数组的使用
    int sz = 0 ;
    //数组大小的计算
    sz = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
//1.不完全初始化数组时，剩余元素默认为0
//2.数组由下访问，下标从零开始
//3.数组大小可以通过计算得到（sizeof(arr)/sizeof(arr[0])）
//4.数组在内存空间中以一片连续的空间存放，arr[]代表的是数组对应的地址值