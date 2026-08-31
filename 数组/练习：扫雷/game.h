#define ROW 9 
#define COL 9
#define ROWS ROW + 2
#define COLS COL + 2


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void newbroad( char arr[ROWS][COLS], int row , int col , char x);

void printbroad( char arr[ROWS][COLS], int row , int col);

void addbomb(char arr[ROWS][COLS], int row, int col);

int stabomb(char answer[ROWS][COLS], char broad[ROWS][COLS], int row, int col);

//void printbroad( char arr[ROWS][COLS], int row , int col);