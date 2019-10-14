#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#if 0
//求m到n之和
int sum(int m, int n)
{
	int sum = 0;
	int i = 0;
	for (i = m ; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	printf("sum = %d\n", sum(m, n));
	system("pause");
	return 0;
}
#endif

#if 0
//简单输出整数
void PrintN(int N)
{
	int i = 1;
	for (i = 1; i <= N; i++)
	{
		printf("%d ", i);
	}
}
int main()
{
	int N;

	scanf("%d", &N);
	PrintN(N);
	system("pause");
	return 0;
}
#endif

#if 0
//多项式求值  
#define MAXN 10
double f(int n, double a[], double x)
{
	int i = 0;
	float fx = 0;
	for (i = 0; i <= n; i++)
	{
		fx += (a[i] * pow(x, i));
	}
	return fx;
}

int main()
{
	int n, i;
	double a[MAXN], x;

	scanf("%d %lf", &n, &x);
	for (i = 0; i <= n; i++)
	{
		scanf("%lf", &a[i]);
	}
	printf("%.1f\n", f(n, a, x));
	system("pause");
	return 0;
}
#endif
#if 1
//本题要求实现一个函数，求给定的N个整数的和


#define MAXN 10

int Sum(int List[], int N)
{
	int sum = 0;
	int i = 0;
	for (i = 0; i < N; i++)
	{
		sum += List[i];
	}
	return sum;
}

int main()
{
	int List[MAXN], N, i;

	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &List[i]);
	printf("%d\n", Sum(List, N));
	system("pause");
	return 0;
}

#endif