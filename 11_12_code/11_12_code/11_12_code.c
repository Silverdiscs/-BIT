#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

//��N�Ľ׳ˡ���������
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		/*ret = ret*i;*/
//		ret *= i;   //��ʽ�Ż����д��
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//1!+2!+3!+...+n!  Ч�ʵͣ�

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


//�ϸ������Ż��汾����Ч�ʸߣ�

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

//���ַ�����(�۰����)��������

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
//			printf("�ҵ��ˣ�%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}





//�ػ�����
//
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("���Խ���1���Ӻ�ػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if(strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}



//쳲�����������������Ч�ʣ�
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