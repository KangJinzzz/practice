#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#if 0
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	int x = 0;
	for (i = 0; i < 32; i++)
	{
		if ((value & 1) == 1)
		{
			x = x + pow(2, 31 - i);
		}
		value >>= 1;
	}
	return x;
}
int main()
{
	unsigned int n = 0;
	scanf("%u", &n);
	int y = reverse_bit(n);
	printf("%u\n", y);
	system("pause");
	return 0;
}


#endif

#if 0

//2.不使用（a + b） / 2这种方式，求两个数的平均值。
int aver1(int a, int b)
{
	a = a + (b - a) / 2;
	return a;
}
int aver2(int a, int b)
{
	return (a >> 1) + (b >> 1);
}
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = aver1(a, b);
	printf("%d\n", c);
	c = aver2(a, b);
	printf("%d\n", c);
	system("pause");
	return 0;
}

#endif

#if 0
//3.编程实现： 
//一组数据中只有一个数字出现了一次。
//其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算） 
int diff(int *arr, int len)
{
	int i = 0;
	int x = 0;
	for (i = 0; i < 7; i++)
	{
		x ^= arr[i];
	}
	return x;
}
int main()
{
	int x = 0;
	int arr[7] = { 1, 1, 5, 5, 8, 9, 9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	x = diff(arr, len);
	printf("%d\n", x);
	system("pause");
	return 0;
}
#endif

#if 1
//4. 
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。

char * swap_str(char *str)
{
	char *left = str;
	char *right = str;
	char temp;
	while ((*right) != '\0')
	{
		right++;
	}
	right--;
	while (left < right)
	{
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
	left = str;
	right = str;
	while (*right!='\0')
	{
		while ( ( (*right) != '\0') && ( (*right) != ' ') )
		{
			right++;
		}
		char *p = right;
		right--;
		while (left < right)
		{
			temp = *left;
			*left = *right;
			*right = temp;
			left++;
			right--;
		}
		if (*p == '\0')
		{
			return str;
		}
		left = p + 1;
		right = p + 1;
	}
	return str;
}

int main()
{
	char str[] = "father heao's am i";
	char *Str = swap_str(str);
	printf("%s\n", Str);
	system("pause");
	return 0;
}
#endif