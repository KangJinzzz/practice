#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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
	printf("����˷��ھ����λ��:\n");
	scanf("%d", &n);
	Multiplication_tables(n);
	system("pause");
	return 0;
}

2.ʹ�ú���ʵ���������Ľ�����
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


3.ʵ��һ�������ж�year�ǲ������ꡣ
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
		printf("%d������\n",y);
	}
	else
	{
		printf("%d��������\n",y);
	}
	system("pause");
	return 0;
}

4.
����һ�����飬
ʵ�ֺ���init������ʼ�����顢
ʵ��empty����������顢
ʵ��reverse���������������Ԫ�ص����á�
Ҫ���Լ���ƺ����Ĳ���������ֵ��

void init(int* a,int n)//��ʼ��
{
	int i = 0;
	int k = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &k);
		a[i] = k;
	}
}
void empty(int* a, int n)//���
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		a[i] = '\0';
	}
}
void reverse(int* a, int n)//����
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
	init(a,10);		//��ʼ��
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	empty(a,10);		//���
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	reverse(a,10);		//����
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

5.ʵ��һ���������ж�һ�����ǲ���������
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
		printf("%d������\n", n);
	}
	else
	{
		printf("%d��������\n", n);
	}
	system("pause");
	return 0;
}