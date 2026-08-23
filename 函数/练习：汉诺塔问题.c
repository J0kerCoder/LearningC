#include <stdio.h>

int hanoi(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        //递归调用汉诺塔问题的公式：
        // 将n个盘子从A柱移动到C柱，需要先将n-1个盘子从A柱移动到B柱，然后将第n个盘子从A柱移动到C柱，最后将n-1个盘子从B柱移动到C柱。
        return hanoi(n - 1) + 1 + hanoi(n - 1);
    }
}

int main()
{
    int n;
    printf("请输入盘子的数量：");
    scanf("%d", &n);
    printf("移动次数为：%d\n", hanoi(n));
    return 0;
}