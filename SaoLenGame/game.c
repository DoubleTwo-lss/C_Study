#include "game.h"

void Initboard(char board[][COLS], int r, int c, char set)
{
	int i,j;
	for (i = 0;i <r;i++)
	{
		for (j = 0;j <c;j++)
		{
			board[i][j] = set;
		}
	}
}

void Displyboard(char Sboard[][COLS], int r, int c)
{
    int i = 0;
    int j = 0;

    for (j = 0;j <= c;j++)//打印行数
    {
        printf("%d ", j);
    }
    printf("\n");

    for (i = 1; i <= r; i++)
    {
        printf("%d ", i);//打印列数

        for (j = 1; j <= c; j++)
        {
            printf("%c ", Sboard[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void SetMine(char mine[][COLS], int r, int c)
{
    int count = Easy_count;
    while (count)
    {
        int x = rand() % r + 1;
        int y = rand() % c + 1;
        if (mine[x][y] == '0')
        {
            mine[x][y] = '1';
            count--;
        }
    }
}

static size_t GetMineCount(char mine[][COLS], int x, int y)
{
    return mine[x - 1][y]     +  mine[x - 1][y - 1]  + mine[x][y - 1] +
           mine[x + 1][y - 1] +  mine[x + 1][y]      + mine[x + 1][y + 1] +
           mine[x][y + 1]     +  mine[x - 1][y + 1]  - 8 * '0';
}
void FindMine(char mine[][COLS],char show[][COLS], int r, int c)
{
    int x, y;
    while (1)
    {
        int win = 0;
        printf("Please input x and y:\n");
        
        if (scanf_s("%d %d", &x, &y) != 2)
        {
            while (getchar() != '\n');
            printf("Error\n");
            continue;
        }
        char ch = getchar();
        if (ch != '\n')
        {
            while (getchar()!= '\n');
            printf("Error\n");
            continue;
        }
        

        if (x >= 1 && x <= r && y >= 1 && y <= c)
        {
            if (show[x][y] != '#')
            {
                printf("you have chose");
            }
            else
            {
                if (mine[x][y] == '1')
                {
                    printf("Game Over\n");
                    Displyboard(mine, ROW, COL);
                    break;
                }
                else
                {
                    size_t count = GetMineCount(mine, x, y);
                    show[x][y] = (char)(count + '0');//声明：不强制转换 也会 隐式转换
                    win++;
                    Displyboard(show, ROW, COL);
                    if (win = r * c - Easy_count)
                    {
                        printf("You are winner\n");
                        Displyboard(mine, ROW, COL);
                        break;
                    }
                }
            }
        
        }
        else
        {
            printf("Error\n");
        }
    }
}
