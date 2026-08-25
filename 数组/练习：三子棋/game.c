#include "game.h"

void new_arr(char arr[3][3], int row , int col )
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j]=' ';
           
        }
    }
}

void print_arr(char broad[3][3], int row , int col )
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %c ",broad[i][j]);
            if (j < col-1)
            {
                printf("|");
            }
            
        }
        printf("\n");
        if (i < row-1)
            {
                printf("---|---|---");
                printf("\n");
            }
    }
}

void pop_move(char arr[3][3], int row , int col )
{
    int i = 0;
    int j = 0;
    while (1)
    {
        printf("请输入行和列（1-3）：");
        scanf("%d %d", &i, &j);
        i--;
        j--;
        if (i < 0 || i >= row || j < 0 || j >= col || arr[i][j] != ' ')
        {
            printf("位置无效或已被占用，请重新输入\n");
            continue;
        }
        arr[i][j] = '*';
        break;
    }
}


void com_move(char arr[3][3], int row , int col )
{
    int ret1 = 0;
    int ret2 = 0;
    while (1)
    {
        ret1 = rand() % row;
        ret2 = rand() % col;
        if (arr[ret1][ret2] == ' ')
        {
            arr[ret1][ret2] = '#';
            break;
        }
    } 
}


int if_full(char arr[3][3], int row , int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j]==' ')
            {
                return 0;
            }
            
        }
        
    }
    return 1;
}



char if_vin(char arr[3][3], int row , int col )
{
    int i = 0;
    int j = 0;
    for ( i = 0; i < row; i++)
    {
        if (arr[i][0]==arr[i][1] && arr[i][0]==arr[i][2] && arr[i][0]!=' ')
        {
            return arr[i][1];
        }
    }
    for ( j = 0; j < col; j++)
    {
        if (arr[0][j]==arr[1][j] && arr[0][j]==arr[2][j] && arr[0][j]!=' ')
        {
            return arr[1][j];
        }
    }
    if (arr[0][0]==arr[1][1] && arr[0][0]==arr[2][2] && arr[0][0]!=' ')
        {
            return arr[1][1];
        }
    if (arr[0][2]==arr[1][1] && arr[0][2]==arr[2][0] && arr[0][2]!=' ')
        {
            return arr[1][1];
        }
   
    if (if_full(arr, row, col))
    {
        return 'U';
    }
    return 'C';
        
}
