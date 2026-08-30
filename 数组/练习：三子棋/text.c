#include "game.h"

// 显示游戏主菜单
void menu()
{
    printf("*********************\n");
    printf("******1.开始游戏*****\n");
    printf("******2.结束游戏*****\n");
    printf("*********************\n");
}

// 执行一局三子棋：玩家和电脑轮流落子，并在每步后检查结果
void game()
{
    char ret = '0';
    char broad[3][3] ={0};
    new_arr(broad,3,3);
    print_arr(broad,3,3);
    while(1)
    {
        // 玩家落子并检查是否获胜或平局
        pop_move(broad,3,3);
        print_arr(broad,3,3);
        ret = if_vin(broad,3,3);
        if (ret != 'C')
        {
            break;
        }
        
        // 电脑随机落子并检查是否获胜或平局
        com_move(broad,3,3);
        print_arr(broad,3,3);
        ret = if_vin(broad,3,3);
        if (ret != 'C')
        {
            break;
        }
    }
    if (ret == '*')
    {
        printf("玩家获胜\n");
    }
    else if (ret == '#')
    {
        printf("电脑获胜\n");
    }
    else
    {
        printf("平局\n");
    }
    
}

// 程序入口：初始化随机数种子，并循环处理菜单选择
int main()
{
    srand((unsigned int)time(NULL));
    int input = 0;
    do
    {
        menu();
        printf("请选择->");
        if (scanf("%d", &input) != 1)
        {
            printf("输入异常，重新输入\n");
            while (getchar() != '\n')
            {
            }
            continue;
        }

    // 根据用户选择开始游戏或退出程序
        switch (input)
        {
        case 1:
            printf("三子棋\n");
            game();
            break;
        case 2:
            printf("游戏结束\n");    
            break;
        default:
            printf("输入异常，重新输入\n");
            break;
        }    

    } while (input != 2);
    
    return 0;
}