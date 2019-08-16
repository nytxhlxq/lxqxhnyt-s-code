#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void Menu()
{
	printf("*************************\n");
	printf("*****     1.play    *****\n");
	printf("*****     0.exit    *****\n");
	printf("*************************\n");
}


void Test()
{
	int input = 0;
	do
	{
		Menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("字符错误，请重新输入!\n");
		}
	} while (input);
}

int main()
{
	srand((unsigned int)time(NULL));
	Test();
	return 0;
}