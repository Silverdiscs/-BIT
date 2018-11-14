#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>




//输出菱形图案
//int main()
//{
//	int line = 0;
//	int i = 0;
//	int j = 0;
//	int n = 0;
//
//	scanf("%d", &line);
//
//	for (i = 0; i < line; i++)
//	{
//		Sleep(1000);
//		for (n = 0; n < line - 1 - i; n++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < line - 1; i++)
//	{
//		Sleep(500);
//		for (n = 0; n < i + 1; n++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//求出0～999之间的所有“水仙花数”并输出
#include <stdio.h>

//int main()              //逆向思维
//{
//	int i, j, k, sum;
//
//	sum = 0;
//
//	for (i = 1; i < 10; i++)
//	for (j = 0; j < 10; j++)
//	for (k = 0; k < 10; k++)
//	if ((i*i*i + j*j*j + k*k*k) == (i * 100 + j * 10 + k))
//		printf("%d\n", i * 100 + j * 10 + k);
//
//	return 0;
//}


#include <stdio.h>

int main()
{
	int a = 2;
	int Sn = 0;
	int i = 0;
	int j = a;
	for (i = 0; i<5; i++)
	{
		Sn = Sn + j;
		j = j * 10 + a;
	}
	printf("%d\n", Sn);
	return 0;
}

