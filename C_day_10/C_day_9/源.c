#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#if 0
//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value)
	{
		value=value&(value - 1);
		count++;
	}
	return count;
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = count_one_bits(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
#endif

#if 0
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	scanf("%d", &n);
	int arr1[16] = { 0 };
	int arr2[16] = { 0 };
	for (i = 0,j = 0; i < 16; i++,j++)
	{
		arr1[i] = n & 1;
		n = n >> 1;
		arr2[j] = n & 1;
		n >>= 1;
	}
	printf("奇数序列：");
	for (i = 15; i >= 0; i--)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("偶数序列：");
	for (i = 15; i >= 0; i--)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

#endif

#if 0
//3. 输出一个整数的每一位。

void Print(int n)
{
	int i = 0;
	int arr[32] = { 0 };
	for (i = 0; i < 32; i++)
	{
		arr[i] = n & 1;
		n >>= 1;
	}
	for (i = 31; i >=0 ; i--)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int n;
	scanf("%d", &n);
	Print(n);
	system("pause");
	return 0;
}

#endif

#if 0
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

int main()
{
	int n, m, i;
	int count = 0;
	scanf("%d%d", &n, &m);
	for (i = 0; i < 32; i++)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}
		n >>= 1;
		m >>= 1;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
#endif