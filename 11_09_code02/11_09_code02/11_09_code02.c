#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 10;
//	int* p = &a;  //p 就是指针变量
//	*p = 20;      //p里面存的是个地址;  这里的*叫解引用操作符（也叫：间接访问操作符）
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
//	//得出结论：指针变量的大小是一样的。都是4（32位机器）/8（64位机器）
//	return 0;
//}

//
//struct Stu //结构体
//{
//	char name[20];
//	short age;
//	char sex[5];
//};
//
//int main()
//{
//	struct Stu s = {"张三", 20 ,"男"};  //这里的 s 是学生对象，对这个对象作初始化
//	printf("%s %d %s\n", s.name, s.age, s.sex);  //这里的“.”叫 结构成员访问操作符
//	return 0;                               //对里面的成员进行访问，用这个操作符“.”
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
//	struct Stu s = { "李四", 23 , "女" };
//	printf("%s %d %s\n", s.name, s.age, s.sex);
//	return 0;
//}

//int main()
//{
//	int age = 2;
//	if (age >= 18)
//		printf("成年男子\n");
//	else
//		printf("未成年\n");
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
//		printf("未成年\n");            //当要输出结果大于一个的时候，应加上大括号{}
//		printf("不能打游戏\n");        //否则程序会报错
//	}
//	else if (age >= 18 && age <= 30)
//		printf("未成年\n");
//	else if (age >30 && age <= 50)
//		printf("中年\n");
//	else if (age > 50)
//		printf("老年\n");
//	return 0;
//}
//
//
//int main()                     //判断一个数字是奇数还是偶数
//{
//	int a = 0;
//	printf("请输入一个数: \n");
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("是奇数\n");
//	else
//		printf("是偶数\n");
//	return 0;
//}


//输出0—100之间的奇数————
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