#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <assert.h>
#include <stdio.h>
#include <windows.h>


//���n���Ʋ������������ǵݹ�ʵ��

//int fib(int n)                         
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int i = 0;
//	for (i = 0; i < n - 2; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}                                
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//���n���Ʋ������������ݹ�ʵ��

//int fib(int n)
//{
//
//	if (n < 3)
//	{
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int S1 = 0;
//	int S2 = 0;
//	printf("������һ������");
//	scanf("%d", &n);
//	S1 = fib(n);
//	S2 = fib(n);
//	printf("�ݹ�����%d\n", S1);
//	return 0;
//}



//��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 

//int funC(int n, int k)
//{
//	if (k <= 0)
//		return 0;
//	else if (n == 1)
//		return 1;
//	else if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n * funC(n, k - 1);
//	}
//}
//int main()
//{
//	int k = 5;
//	int n = 2;
//	printf("%d\n", funC(n, k));
//	return 0;
//}



//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��.
//���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19

//int DigitSum(int n)
//{
//	int sum = 0;
//	int m = 0;
//	if (n != 0)
//	{
//		m = n % 10;
//		n = n / 10;
//		sum = m + DigitSum(n);
//	}
//	return sum;
//}
//int main()
//{
//	int a;
//	printf("������һ�������� ");
//	scanf("%d", &a);
//	printf("��λ��֮��Ϊ��%d\n", DigitSum(a));
//	return 0;
//}



//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�

//��дһ������reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

//void reverse_string(char const * string)
//{
//	assert(string != NULL);
//	if (*string != '\0')
//	{
//		string++;
//		reverse_string(string);
//		printf("%c", *(string - 1));
//	}
//}

//int main()
//{
//	char *string = "Dwyane Wade";
//	printf("ԭ�ַ���Ϊ��  %s\n�������к�Ϊ��", string);
//	reverse_string(string);
//	printf("\n");
//	return 0;
//}


//strlen�Ĺ��� �������ַ����ĳ���

//int main()
//{
//	char* p = "abcdef";
//	int len = strlen(p);
//	printf("%d\n", len);
//	return 0;
//}


//��д�Լ���strlen���� my_strlen��������ʵ��

//int my_strlen(char* str)  //�������Ŀǰ���Ǻ�����
//{
//	int count = 0;
//	while(*str != '\0')  //�����P���ַ�ָ������
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int main()
//{
//	char* p = "abcdef";  //�����P���ַ�ָ������
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}


//��д�Լ���strlen����  �ݹ�ʵ�֡���˼�룺���»�С

//int my_strlen(char* str)  //�����P���ַ�ָ������
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char* p = "abcdef";  //�����P���ַ�ָ������
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}



//��n�Ľ׳ˡ����ǵݹ�ʵ��

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//��1!+2!+.....+5!

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int num = 0;
//	int ret = 1;
//	for (n = 1; n <= 5; n++)
//	{
//		ret = ret*n;
//		num = num + ret;
//	}
//	printf("%d\n", num);
//	return 0;
//}


//��n�Ľ׳ˡ����ݹ�ʵ��

//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d  ", n % 10);
}

int main()
{
	int n = 0;
	int ret = 0;
	printf("������һ��������");
	scanf("%d", &n);
	print(n);
	return 0;
}










