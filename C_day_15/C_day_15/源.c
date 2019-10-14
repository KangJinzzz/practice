#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#if 0

//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。
void Find(int *arr, int len)
{
	int i = 0;
	int ret = 0;
	int count = 0;
	int a = 0;
	int b = 0;
	for (i = 0; i < len; i++)
	{
		ret ^= arr[i];
	}
	for (i = 0; i < 32; i++)
	{
		if ((ret >> i) == 1)
		{
			count = i;
			break;
		}
	}
	for (i = 0; i < len; i++)
	{
		if (arr[i] >> count == 1)
		{
			a ^= arr[i];
		}
		else if (arr[i] >> count == 0)
		{
			b ^= arr[i];
		}
	}
	printf("%d %d\n", a, b);
}
int main()
{
	int arr[8] = { 1, 1, 9, 5, 3, 3, 4, 4 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Find(arr, len);
	system("pause");
	return 0;
}

#endif

#if 0
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。

int Function(int x)
{
	int sum = x;
	int y = x;
	while (y>1)
	{
		sum = sum + y / 2;
		y = y % 2 + y / 2;
	}
	return sum;
}
int main()
{
	int k = 0;
	scanf("%d", &k);
	int ret = Function(k);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

#endif

#if 0
//3.模拟实现strcpy
char *MyStrcpy(char *dest, const char *src)
{
	char *p = dest;
	assert(dest != NULL && src != NULL);
	while (*dest++ = *src++);
	return p;
}
int main()
{
	char arr[20] = "woshiheao";
	char *str = "woshiheaodebaba";
	char *p = MyStrcpy(arr, str);
	printf("%s\n", p);
	system("pause");
	return 0;
}
#endif

#if 0
//4.模拟实现strcat 
char *MyStrcat(char *dest, const char *src)
{
	char *p = dest;
	assert(dest != NULL && src != NULL);
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++);
	return p;
}
int main()
{
	char arr[20] = "woshiheao";
	char *str = "debaba";
	char *p = MyStrcat(arr, str);
	printf("%s\n", p);
	system("pause");
	return 0;
	
}


#endif