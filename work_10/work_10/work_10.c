#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



//写一个函数返回参数二进制中 1 的个数

//int count_one_bits(unsigned int num)
//{
//	int count = 0;
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入数字：\n");
//	scanf("%d", &n);
//	int ret = count_one_bits(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//获取一个数二进制序列中所有的偶数位和奇数位， 分别输出二进制序列

//int main()
//{
//	int num = 0;
//	int i = 0;
//	int tmp;
//	scanf("%d", &num);
//	printf("奇数位为：");
//	for (i = 31; i >= 0; i = i - 2)//也是控制32次（每个整型数按32位来算），只是从31位开始移动
//	{
//		tmp = (num >> i) & 1;//第一次向右移动31位和1与得到第一位情况，每次变化2位，即可得到奇数位情况
//		printf("%d ", tmp);
//	}
//	printf("\n");
//	printf("偶数位为：");
//	for (i = 30; i >= 0; i = i - 2)//向右移动30位，再与1所得结果是原来数字的第二位，再移28位。。。
//	{
//		tmp = (num >> i) & 1;
//		printf("%d ", tmp);
//	}
//	printf("\n");
//	return 0;
//}


//输出一个整数的每一位。

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//编程实现： 
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7


int main()
{
	int a = 0;
	int b = 0;
	int num = 32;                        //定义循环变量
	int count = 0;                       //定义计数器
	scanf_s("%d%d", &a, &b);
	while (num)                          //当循环变量为0时结束循环
	{
		if ((a & 1) != (b & 1))          //提出两个整数的二进制位最低位，判断是否相等，不等则计数器加一
		{
			count++;
		}
		a >>= 1;                         //循环一次a和b右移一次，循环变量减一
		b >>= 1;
		num--;
	}
	printf("%d\n", count);
	return 0;
}






























































































































































































