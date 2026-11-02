#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define Easy_count 80

void Initboard(char board[][COLS], int r, int c, char set);//初始化表格

void Displyboard(char board[][COLS], int r, int c);//打印表格

void SetMine(char mine[][COLS], int r, int c);

void FindMine(char mine[][COLS], char show[][COLS], int r, int c);
