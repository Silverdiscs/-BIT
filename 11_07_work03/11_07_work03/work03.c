#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int arr[10] = { 2, 8, 10, 45, 75, 9, 12, 3, 43, 98 };
	int max = arr[0];
	for (i = 1; i<10; i++)//ע��i����ʼֵΪ1������0
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("max=%d\n", max);
	system("pause");
	return 0;
}
