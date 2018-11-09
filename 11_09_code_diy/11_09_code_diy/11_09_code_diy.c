#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1st code————  //函数的特点——简化代码，代码复用
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//	return 0;
//}



//2nd code ——————数组：一组相同类型元素的集合
//                       //数组的访问，通过下标来访问
//int main()
//{
//	int arr[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int i = 0;            //循环变量
//	for (i = 0; i<sizeof(arr) / sizeof(arr[0]); i++)    //字符的长度除以一个字符的长度计算字符的个数
//	{
//		arr[i] = 0;
//	}
//	for (i = 0; i <sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


 //3rd code ——————移位(对二进制进行移位)
//
//int main()
//{
//	int a = 5;
//	int b = a<<1;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}


//code 4th—————static的作业

void test()
{
	static int a = 1;          //修饰局部变量，使局部变量生命周期边变长
	a++;
	printf("%d\n", a);
}

int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		test();
	}

	return 0;
}