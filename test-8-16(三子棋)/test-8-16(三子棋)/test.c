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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("�ַ���������������!\n");
		}
	} while (input);
}

int main()
{
	srand((unsigned int)time(NULL));
	Test();
	return 0;
}