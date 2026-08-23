#include <stdio.h>

int my_strlen(char *str)
{
    if(*str != '\0')
    {
       return 1 + my_strlen(str + 1);
    }
    return 0;
}

int main()
{
    char str[100];
    scanf("%s", str);
    int len =my_strlen(str);
    printf("字符串的长度为：%d\n", len);
    return 0;
}
//1.函数的递归调用：
//   函数的递归调用是指一个函数在其定义中直接或间接调用自身。
//   递归调用通常用于解决具有重复子问题的复杂问题，通过将问题分解为更小的子问题来实现。
//2.递归的两个基本要素：
//   递归的两个基本要素是递归终止条件和递归公式。
//   递归终止条件用于判断何时停止递归调用，避免无限循环。递归公式用于定义函数在每次调用时如何处理问题的子部分。