//work05
#define _CRT_SECURE_NO_WARNINGS 1


//猜数字游戏的实现
//
//void menu()                 //编写游戏菜单
//{
//	printf("**********************************\n");
//	printf("********      1.play      ********\n");
//	printf("********      0.exit      ********\n");
//	printf("**********************************\n");
//}
//
//void game()                 //游戏内部逻辑
//{
//	int num = 0;
//	int guess = 0;
//	
//	//设置了随机数的生成起点
//	num = rand() % 100 + 1;                                  //1. 系统先生成一个随机数  ,  产生1—100之间的数字
//
//	while (1)                                                //2. 猜数字
//	{
//		printf("请猜数字:> ", num);
//		scanf("%d", &guess);
//		if (guess < num)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > num)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对啦！\n");
//			break;
//		}
//	}
//}
//
//int main()                  //玩家选择参与或者退出游戏
//{
//	int input = 0;
//	//在代码中只要执行一次就可以
//	srand((unsigned int)time(NULL));//这里的NULL是空指针
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}
//	while (input);
//	return 0;
//}


//二分法高效率版（函数实现）————
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
//			return mid;//找到
//		}
//	}
//	return -1;//找不到
//
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int ret = 0;//ret表示返回值，return
//	int k = 10;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	ret = binary_search(arr, k, left, right);
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是：%d\n", ret);
//	return 0;
//}

//模拟用户的登陆情景，最多登陆3次
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:> ");
//		scanf("%s", password);//123456
//
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确，登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新登陆！\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序！\n");
//	}
//	return 0;
//}

//二分法查找(折半查找)————

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
//			printf("找到了：%d\n", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//键盘大小写接收，自动转换——

int change(int m)
{
	if (m <= 91)         //对应ASCII表判断输入字母的ASCII值，大写字母A~Z的ASCII值为65~91
	{
		m = m + 32;   //字母a~z的ASCII值为97~123，则给该字符加32之后，他的ASCII值变为对应的小写字母的ASCII值
	}
	else
	{
		m = m - 32;   //同大写变小写的ASCII值的转换
	}
}


int main()
{
	while (1)
	{
		char a;
		printf("请输入一个字母: ");
		scanf("%c", &a);
		int ret = change(a);
		printf("%c\n", ret);
	}
	return 0;
}