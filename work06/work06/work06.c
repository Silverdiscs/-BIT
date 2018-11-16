#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//打印乘法口诀表——函数实现

//void mul(int x)
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= x; i++)//控制行
//	{
//		for (j = 1; j <= i; j++)//控制列，并由规律知道每行中列总小于等于行
//		{
//			printf("%d*%d==%2d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("请输入要打印的几乘几口诀表数\n");
//	scanf("%d", &a);
//	mul(a);
//	return 0;
//}


//函数实现两个数的交换——这里用到了指针

//void swap(int* px,int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 888;
//	int b = 666;
//	swap(&a, &b);
//	printf("a = %d\nb = %d\n", a, b);
//	return 0;
//}


//闰年的判断——函数实现

//int is_leap_year(int year)
//{
//	return((0 == year % 4 && 0 != year % 100) || (0 == year % 400));
//}
//int main()
//{
//	int year;
//	int ret;
//	printf("请输入一个年份\n");
//	scanf("%d", &year);
//	ret = is_leap_year(year);
//	if (1 == ret)
//	{
//		printf("Yes \n");
//	}
//	else
//	{
//		printf("No \n");
//	} 
//	return 0;
//}



//创建一个数组， 实现函数init（）初始化数组、 实现empty（）清空数组、 实现reverse（）函数完成数组元素的逆置

//void empty(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		arr[i] = 0;
//	}
//
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void init(int arr[], int sz, int a)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		arr[i] = a;
//	}
//}
//
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	int tmp;
//	for (i = 0; i<sz / 2; i++)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int a = 0;
//	//printf("请输入初始化的数字：");
//	//scanf("%d",&a);
//	print(arr, sz);
//	//init(arr,sz,a);
//	reverse(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}


//判断素数——函数实现——是素数输出Yes，不是素数输出No

int is_prime(int n)
{
	int j = 0;
	for (j = 2; j < n; j++)
	{
		if (0 == n%j)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	int ret;
	printf("请输入一个数\n");
	scanf("%d", &n);
	ret = is_prime(n);
	if (1 == ret)
	{
		printf("Yes \n");
	}
	else
	{
		printf("No \n");
	}
	return 0;
}















