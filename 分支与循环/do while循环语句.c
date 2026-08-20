#include <stdio.h>

int main()
{
    int i = 0;
    //do while循环语句先执行循环体，再判断条件是否为真，为真时继续执行循环体，为假时结束循环
    do
    {
        i++;
        if( i == 10)
        {
            break;
        } 
        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i );

    }while (i <= 10);
    return 0;   
}
//1.do while循环语句的特点是至少执行一次循环体，因为条件判断是在循环体之后进行的。
