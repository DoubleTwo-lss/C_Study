#include <stdio.h>
void test()
{
	//static修饰： 栈区的局部变量n-->放到了静态区
	static int n = 10;
	n++;
	printf("%d ", n);
}


int main()
{
	int i = 0;
	for (i = 0;i < 5;i++)
	{
		test();
	}

	extern int S;
	printf("\n%d", S);

	return 0;
}