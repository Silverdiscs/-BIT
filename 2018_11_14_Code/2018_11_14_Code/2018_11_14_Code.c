#define _CRT_SECURE_NO_WARNINGS 1

//��100��200֮�������������ӡ
//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)            //����д�ɣ�j = 2; j <= sqrt(n); j++) ���ã��ص�����Ҫ�ж�2��n-1��ÿһ�����ǲ���n������
//	{
//		if (0 == n%j)
//		{
//			return 0;                    //��������������0
//		}
//	}
//	return 1;                            //������������1 
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("\ncount=%d ", count);
//	return 0;
//}


//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (0 == n%j)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//	
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("\ncount= %d ", count);
//	return 0;
//}


//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (0 == n%j)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if (is_prime(i))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("\ncount= %d ", count);
//	return 0;
//}

int is_leap_year(int year)
{
	return((0 == year % 4 && 0 != year % 100) || (0 == year % 400));
}
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year))
		{
			count++;
			printf("%d\n", year);
		}
	}
	printf("\ncount= %d\n", count);
	return 0;
}










