#include <stdio.h>

int main(){
    int day = 0;
    scanf("%d", &day);
    //switch语句判断表达式的值与case后面的常量值进行匹配
    //匹配成功执行case语句块，匹配失败执行default语句块
    switch (day){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("weekday\n");
            //break语句用于跳出switch语句块，避免执行后续的case语句块
            break;
        case 6:
        case 7:
            printf("weekend\n");
            break;
        //case语句块中可以有多条语句，执行完case语句块后会继续执行后续的case语句块，直到遇到break语句或者switch语句块结束
        default:
            printf("输入错误\n");
    }
    return 0;
}
//1.嵌套switch语句时，内层switch语句的case语句块中可以包含break语句，但不能跳出外层switch语句块
//2.switch语句的表达式只能是整型、字符型、枚举类型，不能是浮点型、数组、结构体等类型
//3.switch语句的case语句块中不能定义变量，如果需要定义变量，可以在case语句块中使用大括号{}将代码块括起来
//4.switch语句的case语句块中不能使用goto语句跳转到其他case语句块，如果需要跳转，可以使用break语句跳出switch语句块，再使用goto语句跳转到其他位置