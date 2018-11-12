#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

//求N的阶乘—————
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		/*ret = ret*i;*/
//		ret *= i;   //上式优化后的写法
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//1!+2!+3!+...+n!  效率低！

//int main()
//{
//	int sum = 0;
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	for (j = 1; j <= 3; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;  
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//上个代码优化版本——效率高！

//int main()
//{
//	int sum = 0;
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	for (j = 1; j <= 3; j++)
//	{
//		ret *= j;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//
//

//二分法查找(折半查找)————

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了：%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}





//关机程序
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在1分钟后关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if(strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}



//斐波那契数————低效率！
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fib(n);
	printf("%d\n", ret);
	return 0;
}