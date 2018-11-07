#define _CRT_SELECT_NO_WARING 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m = 10;
	int n = 9;
	int p;
	p = m;
	m = n;
	n = p;
	printf("m = %d\n", m);
	printf("n = %d\n", n);

	system("pause");
	return 0;
}