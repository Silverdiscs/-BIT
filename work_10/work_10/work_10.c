#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



//дһ���������ز����������� 1 �ĸ���

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
//	printf("���������֣�\n");
//	scanf("%d", &n);
//	int ret = count_one_bits(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//��ȡһ�������������������е�ż��λ������λ�� �ֱ��������������

//int main()
//{
//	int num = 0;
//	int i = 0;
//	int tmp;
//	scanf("%d", &num);
//	printf("����λΪ��");
//	for (i = 31; i >= 0; i = i - 2)//Ҳ�ǿ���32�Σ�ÿ����������32λ���㣩��ֻ�Ǵ�31λ��ʼ�ƶ�
//	{
//		tmp = (num >> i) & 1;//��һ�������ƶ�31λ��1��õ���һλ�����ÿ�α仯2λ�����ɵõ�����λ���
//		printf("%d ", tmp);
//	}
//	printf("\n");
//	printf("ż��λΪ��");
//	for (i = 30; i >= 0; i = i - 2)//�����ƶ�30λ������1���ý����ԭ�����ֵĵڶ�λ������28λ������
//	{
//		tmp = (num >> i) & 1;
//		printf("%d ", tmp);
//	}
//	printf("\n");
//	return 0;
//}


//���һ��������ÿһλ��

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
//	printf("������һ��������");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//���ʵ�֣� 
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7


int main()
{
	int a = 0;
	int b = 0;
	int num = 32;                        //����ѭ������
	int count = 0;                       //���������
	scanf_s("%d%d", &a, &b);
	while (num)                          //��ѭ������Ϊ0ʱ����ѭ��
	{
		if ((a & 1) != (b & 1))          //������������Ķ�����λ���λ���ж��Ƿ���ȣ��������������һ
		{
			count++;
		}
		a >>= 1;                         //ѭ��һ��a��b����һ�Σ�ѭ��������һ
		b >>= 1;
		num--;
	}
	printf("%d\n", count);
	return 0;
}






























































































































































































