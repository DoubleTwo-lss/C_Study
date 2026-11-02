#include <stdio.h>
#include "game.h"
void menu()
{
	printf("**************************\n");
	printf("******** 1.play **********\n");
	printf("******** 0.exit **********\n");
	printf("**************************\n");
	printf("\n\n");
}
void game()
{
	char mine[ROWS][COLS];//存放雷的信息
	char show[ROWS][COLS];//排查出雷的信息

	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '#');

	Displyboard(show, ROW, COL);
//	Displyboard(mine, ROW, COL);

	SetMine(mine, ROW, COL);
//	Displyboard(mine, ROW, COL);

	FindMine(mine,show, ROW, COL);
}


int main()
{
	int input = 0;
	static int i = 1;
	srand((unsigned int)time(NULL));

	while (i)
	{
		menu();
		printf("Please Input:");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			i--;
			break;
		case 0:
			printf("Exit Game\n");
			i--;
			break;

		default:
				printf("Error choose again\n");
		}
	} 
}