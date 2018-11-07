#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int a, b;
	while (1)
	{
		printf("输入两个数字求最大公约数：");
		scanf("%d%d", &a, &b);
		while (a != b)
		{
			if (a > b)
				a = a - b;
			else
				b = b - a;
		}
		printf("最大公约数为：%d\n", a);
	}

	return 0;

}