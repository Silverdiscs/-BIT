#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

//��ӡ  I LOVE U BIG ASS!!!
//int main()
//{
//	char arr1[] = "I LOVE U BIG ASS!!!";
//	char arr2[] = "$$$$$$$$$$$$$$$$$$$";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2; //sizeof���ַ�������������-1�ǰ�\0��ȥ�ˣ��ټ�ȥ1�����һ��Ԫ�ص��±ꡣstrlen�Ź���\0����sizeof�����м���0�������ַ���ռ�ռ�
//	int right = strlen(arr1) - 1;//�������������⡪����Ϊstrlen������\0�Ĵ��ڣ������ַ������ȡ���\0֮ǰ���ַ�����
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(521);//����ĵ�λ��ms����˯�ߺ�����ͷ�ļ���windows.h
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	return 0;
//}


//ģ���û��ĵ�½�龰������½3��
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:> ");
//		scanf("%s", password);//123456
//
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ����½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("������������µ�½��\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}



//���ַ���Ч�ʰ�

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


//���ַ���Ч�ʰ棨����ʵ�֣���������
//int binary_search(int arr[], int k, int left, int right)
//{
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
//			return mid;//�ҵ�
//		}
//	}
//	return -1;//�Ҳ���
//
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int ret = 0;//ret��ʾ����ֵ��return
//	int k = 10;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	ret = binary_search(arr, k, left, right);
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	return 0;
//}



//��������Ϸ��ʵ��
//
//void menu()                 //��д��Ϸ�˵�
//{
//	printf("**********************************\n");
//	printf("********      1.play      ********\n");
//	printf("********      0.exit      ********\n");
//	printf("**********************************\n");
//}
//
//void game()                 //��Ϸ�ڲ��߼�
//{
//	int num = 0;
//	int guess = 0;
//	
//	//��������������������
//	num = rand() % 100 + 1;                                  //1. ϵͳ������һ�������  ,  ����1��100֮�������
//
//	while (1)                                                //2. ������
//	{
//		printf("�������:> ", num);
//		scanf("%d", &guess);
//		if (guess < num)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > num)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶�����\n");
//			break;
//		}
//	}
//}
//
//int main()                  //���ѡ���������˳���Ϸ
//{
//	int input = 0;
//	//�ڴ�����ֻҪִ��һ�ξͿ���
//	srand((unsigned int)time(NULL));//�����NULL�ǿ�ָ��
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}
//	while (input);
//	return 0;
//}





