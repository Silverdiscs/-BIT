#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 10;
//	int* p = &a;  //p ����ָ�����
//	*p = 20;      //p�������Ǹ���ַ;  �����*�н����ò�������Ҳ�У���ӷ��ʲ�������
//	printf("%d\n", a);
//	return 0;
//}
//
//
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//
//	return 0;
//}
//
//
//
//int main()
//{
//    int a = 10;
//    int* pa = &a;
//
//    char c = 'w';
//    char* pc = &c;
//	printf("%d\n", sizeof(int*));  //4
//	printf("%d\n", sizeof(char*)); //4
//	printf("%d\n", sizeof(short*)); //4
//	printf("%d\n", sizeof(long*)); //4
//	printf("%d\n", sizeof(float*)); //4
//	printf("%d\n", sizeof(double*)); //4
//	//�ó����ۣ�ָ������Ĵ�С��һ���ġ�����4��32λ������/8��64λ������
//	return 0;
//}

//
//struct Stu //�ṹ��
//{
//	char name[20];
//	short age;
//	char sex[5];
//};
//
//int main()
//{
//	struct Stu s = {"����", 20 ,"��"};  //����� s ��ѧ�����󣬶������������ʼ��
//	printf("%s %d %s\n", s.name, s.age, s.sex);  //����ġ�.���� �ṹ��Ա���ʲ�����
//	return 0;                               //������ĳ�Ա���з��ʣ��������������.��
//}
////
//struct Stu
//{
//	char name [20];
//	short age;
//	char sex[5];
//};
//
//int main()
//{
//	struct Stu s = { "����", 23 , "Ů" };
//	printf("%s %d %s\n", s.name, s.age, s.sex);
//	return 0;
//}

//int main()
//{
//	int age = 2;
//	if (age >= 18)
//		printf("��������\n");
//	else
//		printf("δ����\n");
//	return 0;
//}
//
//
//
//int main()
//{
//	int age = 13;
//	if (age<18)
//	{
//		printf("δ����\n");            //��Ҫ����������һ����ʱ��Ӧ���ϴ�����{}
//		printf("���ܴ���Ϸ\n");        //�������ᱨ��
//	}
//	else if (age >= 18 && age <= 30)
//		printf("δ����\n");
//	else if (age >30 && age <= 50)
//		printf("����\n");
//	else if (age > 50)
//		printf("����\n");
//	return 0;
//}
//
//
//int main()                     //�ж�һ����������������ż��
//{
//	int a = 0;
//	printf("������һ����: \n");
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("������\n");
//	else
//		printf("��ż��\n");
//	return 0;
//}


//���0��100֮���������������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	for (i = 1; i <= 200; i++)
	{
		if (i % 2 == 1)
			printf("%d\n", i);
	}	
	return 0;
}