#ifndef GAME_H
#define GAME_H




#define ROW  3
#define COL  3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void new_arr(char broad[3][3], int row , int col );


void print_arr(char broad[3][3], int row , int col );


void pop_move(char arr[3][3], int row , int col );


void com_move(char arr[3][3], int row , int col );


char if_vin(char arr[3][3], int row , int col );


#endif