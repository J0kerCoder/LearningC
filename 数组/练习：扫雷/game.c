#include "game.h"

void newbroad( char arr[ROWS][COLS], int row , int col , char x)
{
    for (int i = 0; i < row ; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = x;
        }
        
    }
    
}

void printbroad( char arr[ROWS][COLS], int row , int col)
{
    for (int i = 1; i < row+1 ; i++)
    {
        for (int j = 1; j < col+1; j++)
        {
            printf(" %c",arr[i][j]);
        }
        printf("\n");
    }
}

void addbomb(char arr[ROWS][COLS], int row, int col)
{
    int count = 0;
    while (count < 10)
    {
        int r1 = rand() % row + 1;
        int r2 = rand() % col + 1;
        if (arr[r1][r2] == '0')
        {
            arr[r1][r2] = '1';
            count++;
        }
    }
}

int get_bomb_count(char answer[ROWS][COLS], int x, int y)
{
    return answer[x-1][y-1]
    +answer[x][y-1]
    +answer[x-1][y]
    +answer[x+1][y-1]
    +answer[x-1][y+1]
    +answer[x][y+1]
    +answer[x+1][y]
    +answer[x+1][y+1]-8*'0';
}

void open_empty(char answer[ROWS][COLS], char broad[ROWS][COLS], int x, int y)
{
    if (broad[x][y] != '*')
    {
        return ;
    }
    if (x < 1 || x > ROW || y < 1 || y > COL)
    {
        return ;
    }
    
    int count = get_bomb_count(answer,x,y);
    broad[x][y] = count + '0';
    if (count == 0 )
    {
        for (int i = x - 1; i <= x+1; i++)
        {
            for (int j = y - 1; j <= y+1; j++)
            {
                open_empty(answer,broad,i,j);
            }
        }
        
    }
    
}

int stabomb( char answer[ROWS][COLS], char broad[ROWS][COLS], int row, int col)
{
    int x = 0;
    int y = 0;
    int count = 0;
    int hidden = 0;
    printf("请输入坐标：");
    scanf("%d%d", &x , &y);

    if (x < 1 || x > row || y < 1 || y > col)
    {
        printf("坐标越界，请重新输入\n");
        return 1;
    }

    if (answer[x][y] == '1')
    {
        printf("被炸死了\n");
        printbroad(answer, row, col);
        return 0;
    }

    if (broad[x][y] != '*')
    {
        printf("该位置已打开，请重新输入\n");
        return 1;
    }

    open_empty(answer,broad,x,y);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (answer[i][j] == '0' && broad[i][j] == '*')
            {
                hidden++;
            }
        }
    }

    if (hidden == 0)
    {
        printf("恭喜你赢了!\n");
        printbroad(broad, row, col);
        return 2;
    }

    return 1;
}