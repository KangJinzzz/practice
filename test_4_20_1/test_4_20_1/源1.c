#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//1.交换
//int main()
//{
//	int a = 6;
//	int b = 10;
//	int t = 0;
//	printf("a=%2d  b=%2d\n", a, b);
//	t = a;
//	a = b;
//	b = t;
//	printf("a=%2d  b=%2d\n", a, b);
//	system("pause");
//	return 0;
//}

//2.交换
int main()
{
	int a = 50;
	int b = 21;
	printf("a=%d  b=%d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d  b=%d\n", a, b);
	system("pause");
	return 0;
}

//3.最大值
//int main()
//{
//	int a[10] = { 1, 2, 13, 4, 5, 6, 17, 8, 99, 10 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i + 1]>max)
//			max = a[i + 1];
//		else
//			max = max;
//	}
//	printf("max=%d", max);
//	system("pause");
//	return 0;
//}

//4.从小到大输出
//int main()
//{
//	int t = 0;
//	int i = 0;
//	int a[3] = { 16, 5, 66 };
//	int max = a[0];
//	printf("从大到小依次为：");
//	for (int j = 0; j < 2; j++)
//	{
//		for (i = 0; i < 2; i++)
//		{
//			if (a[i] < a[i + 1])
//			{
//				t = a[i + 1];
//				a[i+1] = a[i];
//				a[i] = t;
//			}
//		}
//	}
//	for (int k = 0; k <= 2; k++)
//	{
//		printf("%d ", a[k]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//5.两个数的最大公约数
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int k = 0;
//	printf("输入两个数：");
//	scanf("%d%d", &a, &b);
//	for (i = 2; ((i <= a) && (i <= b)); i++)
//	{
//		if ((a%i == 0) && (b%i == 0))
//		{
//			k = i;
//		}
//	}
//	printf("最大公约数k=%d\n", k);
//	system("pause");
//	return 0;
//}