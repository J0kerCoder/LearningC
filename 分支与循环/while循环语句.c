#include <stdio.h>

int main()
{
    int i = 0;
    //while循环语句判断条件为真时执行循环体，为假时结束循环
    while (i <= 10)
    {
        i++;
        if (i == 10)
        {
            //break语句用于结束循环，跳出当前循环体
            break;
        }
        if (i == 5)
        {
            //continue语句用于跳过当前迭代，继续下一次迭代
            continue;
        }
        printf("%d\n" , i);
    }
    return 0;
}
//1.while循环语句书写时注意代码块与判断条件的对应关系应该使用大括号{}将代码块括起来，避免出现歧义
//2.while循环语句中可以使用break语句结束循环，也可以使用continue语句跳过当前迭代，继续下一次迭代
//3.while循环语句中可以使用if语句进行条件判断，执行不同的操作
//4.while循环语句中可以使用变量进行计数，控制循环次数避免出现死循环