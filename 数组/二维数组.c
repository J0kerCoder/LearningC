#include <stdio.h>

int main()
{   //二维数组初始化
    int arr[3][4] = {0};
    //二维数组添加元素
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //二维数组遍历打印
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//1.二维数组同样是以一段连续的空间存放
//2.数组名能表示首位元素的地址，二维数组名则表示首行元素地址
//3.（&数组名）表示整个数组地址
//4.sizeof（数组名）中数组名代表整个数组地址，计算整个数组大小，单位是字节