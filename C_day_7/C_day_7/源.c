#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//1.递归和非递归分别实现求第n个斐波那契数。
int fib1(int n)	//递归
{
	if (n > 2)
	{
		return fib1(n - 1) + fib1(n - 2);
	}
	else
		return 1;
}
int fib2(int n)	//非递归
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 0;
	for (i = 0; i < n - 2; i++)
	{
		if (3 <= n)
		{
			c = a + b;
			a = b;
			b = c;
		}
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int f1 = fib1(n);	//递归
	printf("第%d个数为：%d\n", n, f1);
	//int f2 = fib2(n);		//非递归
	//printf("第%d个数为：%d\n", n, f2);
	system("pause");
	return 0;
}

//2.编写一个函数实现n^k，使用递归实现
int my_pow(int n , int k)
{
	if (k > 0)
	{
		return n*my_pow(n, k - 1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	int ret = my_pow(n, k);
	printf("%d^%d=%d\n", n, k, ret);
	system("pause");
	return 0;

}

//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
int DigitSum(int n)
{
	if (n > 9)
	{
		return (n % 10 + DigitSum(n / 10));
	}
	else
	{
		return n % 10;
	}
}

int main()
{
	unsigned int n = 0;
	scanf("%d", &n);
	int ret = DigitSum(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

//4. 编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
#include<string.h>
void reverse_string(char* string)
{
	int sz = (sizeof(string)) / (sizeof(string[0])) - 1;
	strcpy(*(string + sz), *string);
	if ((*string) != '\0')
	{
		reverse_string(string+1);
	}

}

int main()
{
	char arr[] = "abcdefg";
	printf("%s\n", arr);
	reverse_string(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}

//5.递归和非递归分别实现strlen 
int my_strlen_1(char* str)  //递归
{
	if ((*str) != '\0')
	{
		return 1 + my_strlen1(str + 1);
	}
	else
	{
		return 0;
	}
}
int my_strlen_2(char* str)
{
	int count = 0;
	while ((*str) != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[20] = {0};
	scanf("%s", arr);
	int len1 = my_strlen_1(arr);
	printf("%d\n", len1);
	int len2 = my_strlen_2(arr);
	printf("%d\n", len2);
	system("pause");
	return 0;
}

//6.递归和非递归分别实现求n的阶乘 
int factorial_1(int n)	//递归
{
	if (n > 1)
	{
		return n*factorial_1(n - 1);
	}
	else
	{
		return 1;
	}
}
int factorial_2(int n)	//非递归
{
	int i = 0;
	int r = 1;
	for (i = 1; i <= n ; i++)
	{
		r *= i;
	}
	return r;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret=factorial_2(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

//7.递归方式实现打印一个整数的每一位 
void Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d ", n % 10);

}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Print(n);
	system("pause");
	return 0;
}