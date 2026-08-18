#include <stdio.h>

int main(){
    int age = 0;
    scanf("%d", &age);
    //if语句判断0为假非0为真
    //表达式为真执行if语句块，为假执行else语句块
    if (age <18){
        printf("青少年\n");
    }
    else if(age>=18 && age<30){
        printf("青年\n");
    }
    else if(age >= 30 && age<60){
        printf("壮年\n");
    }
    else{
        printf("老年\n");
    }
    return 0;
}   
//1.一个else语句块对应最近的if语句块
//2.if语句书写时注意代码块与判断条件的对应关系应该使用大括号{}将代码块括起来，避免出现歧义
