#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>  //define定义常量和宏  
#define ADD(x, y)  ((x)+(y))

int main()
{
	int sum = 0;
	sum = 10 * ADD(2, 3);
	sum = 10 * ((2) + (3));
	printf("sum =%d\n", sum);
	system("pause");
	return 0;
}