

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