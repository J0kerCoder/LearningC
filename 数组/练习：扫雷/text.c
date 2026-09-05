#include <C:\Users\井晨旭\Desktop\LearningC\数组\练习：扫雷\game.c>

// 显示扫雷游戏的主菜单。
void mune()
{
    // 使用固定格式输出菜单，方便玩家选择开始或退出游戏。
    printf("**********************\n");
    printf("******1.开始游戏******\n");
    printf("******0.结束游戏******\n");
    printf("**********************\n");
}

// 开始一局扫雷游戏，并持续接收玩家的操作和坐标输入。
void game()
{
    // broad 是玩家看到的棋盘：未翻开的格子用 '*' 表示，
    // 翻开后显示周围的地雷数量。
    char broad[ROWS][COLS] = {0};

    // answer 是程序内部使用的答案棋盘：'1' 表示地雷，
    // '0' 表示当前位置没有地雷。它不会直接作为玩家棋盘使用。
    char answer[ROWS][COLS] = {0};

    // ROWS 和 COLS 比实际棋盘的行列数各多 2，
    // 最外层作为边界，便于统计边缘位置周围的 8 个格子。
    // 初始化玩家棋盘和答案棋盘。
    newbroad(broad, ROWS, COLS, '*');
    newbroad(answer, ROWS, COLS, '0');

    // 在答案棋盘的实际区域中随机放置地雷。
    addbomb(answer, ROW, COL);

    // 一局游戏会不断循环：显示棋盘、读取坐标并判断结果。
    while (1)
    {
        // 只显示实际的 9 x 9 区域，不显示外围的辅助边界。
        printbroad(broad, ROW, COL);

        // 当前实现同时打印答案棋盘，便于学习和调试；
        // 正式游戏中通常应删除这一行，否则玩家可以直接看到地雷。
        //printbroad(answer, ROW, COL);

        // stabomb 返回值含义：
        // 0 表示踩到地雷，2 表示成功通关，1 表示本轮输入有效但游戏继续。
        int ret = stabomb(answer, broad, ROW, COL);

        // 踩雷或获胜后结束当前这一局，返回主菜单。
        if (ret == 0 || ret == 2)
        {
            break;
        }
    }
}

int main()
{
    // 用当前时间设置随机数种子，避免每次启动时地雷位置完全相同。
    srand((unsigned int)time(NULL));

    // 保存玩家在菜单中输入的选项。
    int input = 0;

    // do-while 保证程序至少显示一次菜单；当 input 为 0 时退出循环。
    do
    {
        mune();
        printf("请选择：");

        // 读取菜单选项：1 开始游戏，0 退出，其他值视为无效选项。
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            // 进入一局新的扫雷游戏。
            printf("开始游戏\n");
            game();
            break;
        case 0:
            // input 保持为 0，do-while 的条件会让程序结束。
            printf("游戏结束\n");
            break;    
        default:
            // 输入既不是 1 也不是 0 时，提示玩家重新选择。
            printf("请重新输入：\n");
        }
    } while (input);
    
    return 0;
}