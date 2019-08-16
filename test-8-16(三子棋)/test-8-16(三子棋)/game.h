#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define ROW 3
#define COL 3

void InitBoard(char Board[ROW][COL], int row, int col);
void DisplayBoard(char Board[ROW][COL], int row, int col);
void Playermove(char Board[ROW][COL], int row, int col);
void Computermove(char Board[ROW][COL], int row, int col);
char IsWin(char Board[ROW][COL], int row, int col);