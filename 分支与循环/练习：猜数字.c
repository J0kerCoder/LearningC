#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guess_number_game()
{
    int ret = rand() % 100 + 1;
    int guess_number = 0;
    while (1)
    {
        printf("请输入数字：\n");
        scanf("%d",&guess_number);
        if (guess_number>ret)
        {
          printf("数字猜大了\n");  
        }
        else if(guess_number<ret)
        {
            printf("数字猜小了\n");
        }
        else
        {
            printf("猜对了\n");
            break;
        }
    }
        
}

int main ()
{
    srand((unsigned int)time(NULL));
    int choice = 0;
    do
    {
        printf("######猜数字######\n");
        printf("####1.开始游戏####\n");
        printf("####2.退出游戏####\n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("游戏开始\n");
                guess_number_game();
                break;
            case 2:
                printf("游戏结束\n");
                break;
            default:
                printf("输入错误，请重新输入\n");
                break;
        }
    } while (choice != 2);
    
    
    return 0;
}