#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1st code��������  //�������ص㡪���򻯴��룬���븴��
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



//2nd code ���������������飺һ����ͬ����Ԫ�صļ���
//                       //����ķ��ʣ�ͨ���±�������
//int main()
//{
//	int arr[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int i = 0;            //ѭ������
//	for (i = 0; i<sizeof(arr) / sizeof(arr[0]); i++)    //�ַ��ĳ��ȳ���һ���ַ��ĳ��ȼ����ַ��ĸ���
//	{
//		arr[i] = 0;
//	}
//	for (i = 0; i <sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


 //3rd code ��������������λ(�Զ����ƽ�����λ)
//
//int main()
//{
//	int a = 5;
//	int b = a<<1;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}


//code 4th����������static����ҵ

void test()
{
	static int a = 1;          //���ξֲ�������ʹ�ֲ������������ڱ߱䳤
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