#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;  
//	//输出结果为9，指针减去指针就是指针和指针之间元素的个数,小地址减去大地址有可能输出为负数
//	//指针之间的相减，指的是同一空间的两个地址
//}

//my_strlen——求字符串长度

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//		
//}
//
//int main()
//{
//	char* p = "abcdef";
//	//char arr[] = "abcdef";
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}


//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//		str++;
//	return str - start;
//}
//
//int main()
//{
//	char* p = "abcdef";
//	//char arr[] = "abcdef";
//	int len = my_strlen(p);
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p; //二级指针
//	return 0;
//}


//int main()
//{
//	int arr[10];
//	int* arr2[5];
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}






















