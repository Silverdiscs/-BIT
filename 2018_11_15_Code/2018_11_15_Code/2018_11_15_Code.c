#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <assert.h>
#include <stdio.h>
#include <windows.h>


//求第n个菲波那锲数——非递归实现

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


//求第n个菲波那锲数——递归实现

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
//	printf("请输入一个数：");
//	scanf("%d", &n);
//	S1 = fib(n);
//	S2 = fib(n);
//	printf("递归结果：%d\n", S1);
//	return 0;
//}



//编写一个函数实现n^k，使用递归实现 

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



//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和.
//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19

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
//	printf("请输入一个整数： ");
//	scanf("%d", &a);
//	printf("各位数之和为：%d\n", DigitSum(a));
//	return 0;
//}



//编写一个函数 reverse_string(char * string)（递归实现）

//编写一个函数reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。

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
//	printf("原字符串为：  %s\n反向排列后为：", string);
//	reverse_string(string);
//	printf("\n");
//	return 0;
//}


//strlen的功能 ——求字符串的长度

//int main()
//{
//	char* p = "abcdef";
//	int len = strlen(p);
//	printf("%d\n", len);
//	return 0;
//}


//编写自己的strlen—— my_strlen——常规实现

//int my_strlen(char* str)  //这个代码目前不是很完善
//{
//	int count = 0;
//	while(*str != '\0')  //这里的P是字符指针类型
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int main()
//{
//	char* p = "abcdef";  //这里的P是字符指针类型
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}


//编写自己的strlen——  递归实现——思想：大事化小

//int my_strlen(char* str)  //这里的P是字符指针类型
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char* p = "abcdef";  //这里的P是字符指针类型
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}



//求n的阶乘——非递归实现

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


//求1!+2!+.....+5!

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


//求n的阶乘——递归实现

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


//递归方式实现打印一个整数的每一位 

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
	printf("请输入一个整数：");
	scanf("%d", &n);
	print(n);
	return 0;
}










