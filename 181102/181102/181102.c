#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int price = 0;

	printf("�������� (Ԫ) ");
	scanf("%d", &price);

	int change = 100 - price;

	printf("����%dԪ\n", change);
	system("pause");
	return 0;
}