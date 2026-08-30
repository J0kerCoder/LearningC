#include <C:\Users\井晨旭\Desktop\LearningC\数组\练习：扫雷\game.h>

void mune()
{
    printf("**********************\n");
    printf("******1.开始游戏******\n");
    printf("******0.结束游戏******\n");
    printf("**********************\n");
}

void game()
{
    char broad[ROWS][COLS] = {0};
    char answer[ROWS][COLS] = {0};
    newbroad(broad, ROWS, COLS, '*');
    newbroad(answer, ROWS, COLS, '0');
    printbroad(broad, ROW, COL);
    addbomb(answer,ROW,COL);
    printbroad(answer, ROW, COL);
}

int main()
{
    srand((unsigned int)time(NULL));
    int input = 0;
    do
    {
        mune();
        printf("请选择：");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            printf("开始游戏\n");
            game();
            break;
        case 0:
            printf("游戏结束\n");
            break;    
        default:
            printf("请重新输入：\n");
        }
    } while (input);
    
    return 0;
}