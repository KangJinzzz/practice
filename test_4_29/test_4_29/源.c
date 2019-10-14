#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#include<string.h>
//1.完成猜数字游戏
void menu()
{
	printf("************************\n");
	printf("*******  1.play  *******\n");
	printf("*******  0.exit  *******\n");
	printf("************************\n");

}
void game()
{
	int i = rand()%100+1;
	int n = 0;
	while (1)
	{
		printf("请输入要猜的数字：\n");
		scanf("%d", &n);
		if (n > i)
		{
			printf("猜大了!\n");
		}
		else if (n < i)
		{
			printf("猜小了!\n");
		}
		else
		{
			printf("猜对了!\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:game(); 
			break;
		case 0:
			break;
		default:printf("输入错误，请重新选择！\n");
		}
	} while (input);
	system("pause");
	return 0;
}

//2.折半查找
//void binary_search(int *arr, int right, int k) //二分查找函数
//{
//	int left = 0;  //lef为数组第一个元素下标，right为数组最后一个元素下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2; //mid为中间元素下标
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (mid[arr] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//		printf("找不到！\n");
//}
//int main()
//{
//	int n;
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int ret = sizeof(a) / sizeof(a[0]) - 1;
//	printf("请输入要查找的数：\n");
//	scanf("%d", &n);
//	binary_search(a, ret, n);//调用函数，求出结果
//	system("pause");
//	return 0;
//}
//
////3.编写代码模拟三次密码输入的场景
//int main()
//{
//	int i = 0;
//	char s[20] = "heaoismyson";
//	char input[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：\n", i);
//		scanf("%s", input);
//		if (strcmp(s, input) == 0)
//		{
//			printf("登陆成功！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误！\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("退出程序\n");
//	}
//	system("pause");
//	return 0;
//}
//
////4.编写一个程序，可以一直接收键盘字符， 如果是小写字符就输出对应的大写字符，如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
//int main()
//{
//	char input='a';
//	while (1)
//	{
//		scanf("%c", &input);
//		if ((input >= 65) && (input <= 90))
//		{
//			printf("%c\n", input + 32);
//		}
//		else if ((input >= 97) && (input <= 122))
//		{
//			printf("%c\n", input - 32);
//		}
//
//	}
//
//	system("pause");
//	return 0;
//}