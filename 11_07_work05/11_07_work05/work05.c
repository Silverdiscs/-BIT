#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int a, b;
	while (1)
	{
		printf("�����������������Լ����");
		scanf("%d%d", &a, &b);
		while (a != b)
		{
			if (a > b)
				a = a - b;
			else
				b = b - a;
		}
		printf("���Լ��Ϊ��%d\n", a);
	}

	return 0;

}