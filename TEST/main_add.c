/*
#include <stdio.h>
#include <stdbool.h>

is_leap_year(int y);
int main()
{
	int year = 0;
	scanf_s("%d", &year);
	if (is_leap_year(year))
		printf("ya");
	else
		printf("no");
	return 0;
}

is_leap_year(int y)
{
	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
		return true;
	else
		return false;·
}
*/
#include <stdio.h>
#include "Add.h"
int main()
{
	int a = 0;
	int b = 0;
	printf("input 2 num:\n");
	scanf_s("%d %d", &a, &b);

	int c = Add(a, b);
	printf("sum=%d", c);
	return 0;
}

