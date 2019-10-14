#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
void Multiplication_tables(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%2d=%3d ",i,j,i*j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	printf("输入乘法口诀表的位数:\n");
	scanf("%d", &n);
	Multiplication_tables(n);
	system("pause");
	return 0;
}

2.使用函数实现两个数的交换。
void change(int* x,int* y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

int main()
{
	int a = 20;
	int b = 50;
	printf("a=%d b=%d\n", a, b);
	change(&a, &b);
	printf("a=%d b=%d\n", a, b);
	system("pause");
	return 0;
}


3.实现一个函数判断year是不是润年。
int is_leapyear(int y)
{
	if ((((y % 4) == 0) && ((y % 100) != 0)) || (y % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int y = 0;
	scanf("%d", &y);
	if (1 == is_leapyear(y))
	{
		printf("%d是闰年\n",y);
	}
	else
	{
		printf("%d不是闰年\n",y);
	}
	system("pause");
	return 0;
}

4.
创建一个数组，
实现函数init（）初始化数组、
实现empty（）清空数组、
实现reverse（）函数完成数组元素的逆置。
要求：自己设计函数的参数，返回值。

void init(int* a,int n)//初始化
{
	int i = 0;
	int k = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &k);
		a[i] = k;
	}
}
void empty(int* a, int n)//清空
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		a[i] = '\0';
	}
}
void reverse(int* a, int n)//逆置
{
	int i = 0;
	int j = 0;
	int* b = (int *)malloc(n * sizeof(int));
	for (i =0,j=n-1; i <n; i++,j--)
	{
		b[i] = a[j];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
	}
}
int main()
{
	int i = 0;
	int a[10] = { 0 };
	init(a,10);		//初始化
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	empty(a,10);		//清空
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	reverse(a,10);		//逆置
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

5.实现一个函数，判断一个数是不是素数。
int is_prime(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if ((x % i) == 0)
		{
			return 0;
		}
	}
	return 1;

}
int main()
{
	int n=0;
	scanf("%d", &n);
	if (1==is_prime(n))
	{
		printf("%d是素数\n", n);
	}
	else
	{
		printf("%d不是素数\n", n);
	}
	system("pause");
	return 0;
}