#ifndef GAME_H
#define GAME_H




// 三子棋棋盘的行数和列数
#define ROW  3
#define COL  3

// 使用到的标准库：输入输出、随机数和时间
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 将棋盘的每个位置初始化为空格
void new_arr(char broad[3][3], int row , int col );


// 按三子棋的格式打印棋盘
void print_arr(char broad[3][3], int row , int col );


// 获取玩家输入，并将玩家棋子 '*' 放入指定位置
void pop_move(char arr[3][3], int row , int col );


// 随机选择一个空位置，并将电脑棋子 '#' 放入其中
void com_move(char arr[3][3], int row , int col );


// 判断当前棋局状态：返回获胜棋子、平局标记或继续标记
char if_vin(char arr[3][3], int row , int col );


#endif