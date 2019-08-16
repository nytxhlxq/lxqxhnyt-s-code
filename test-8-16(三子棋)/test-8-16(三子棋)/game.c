#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void Game()
{
	int ret = 0;
	char Board[ROW][COL] = {' '};
	InitBoard(Board, ROW, COL);
	DisplayBoard(Board,ROW,COL);
	while (1)
	{
		Playermove(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);
		ret = IsWin(Board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Computermove(Board, ROW, COL);
		DisplayBoard(Board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if(ret == '*')
	{
		printf("玩家赢\n");
	}
	else if(ret == '#')
	{
		printf("电脑赢\n");
	}
	else if(ret == 'Q')
	{
		printf("平局\n");
	}
}
void InitBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//for (i = 0; i < ROW;i++)
	//{
	//	for (j = 0; j < COL; j++)
	//	{
	//		Board[i][j] = ' ';
	//	}
	//}
	memset(Board, ' ', ROW*COL*sizeof(Board[0][0]));
}
void DisplayBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int n = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", Board[i][j]);
			if (j < COL - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void Playermove(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("玩家走!\n");
	while (1)
	{
		printf("请输入坐标：");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= ROW && j >= 1 && j <= COL)
		{
			if (Board[i - 1][j - 1] != ' ')
			{
				printf("已被占用，请重新选择!\n");

			}
			else
			{
				Board[i - 1][j - 1] = '*';
				break;
			}
		}
		else
		{
			printf("非法输入请重试!\n");
		}
	}
}

void Computermove(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("电脑走!\n");
	while (1)
	{
		i = rand() % ROW;
		j = rand() % COL;
		if (Board[i][j] != ' ')
			continue;
		else
		{
			Board[i][j] = '#';
			break;
		}
	}
}
char IsWin(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i<row; i++)
	{
		if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2] && Board[i][0] != ' ')
		{
			return Board[i][0];
		}
	}

	for (i = 0; i<col; i++)
	{
		if (Board[0][i] == Board[1][i] && Board[1][i] == Board[2][i] && Board[0][i] != ' ')
		{
			return Board[0][i];
		}
	}

	if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[1][1] != ' ')
	{
		return Board[1][1];
	}
	if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0] && Board[1][1] != ' ')
	{
		return Board[1][1];
	}
	for (i = 0; i<row; i++)
	{
		for (j = 0; j<col; j++)
		{
			if (Board[i][j] == ' ')
				return 'C';
		}
	}
	return 'Q';
}