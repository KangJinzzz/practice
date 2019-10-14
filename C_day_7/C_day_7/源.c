#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
int fib1(int n)	//�ݹ�
{
	if (n > 2)
	{
		return fib1(n - 1) + fib1(n - 2);
	}
	else
		return 1;
}
int fib2(int n)	//�ǵݹ�
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
	int f1 = fib1(n);	//�ݹ�
	printf("��%d����Ϊ��%d\n", n, f1);
	//int f2 = fib2(n);		//�ǵݹ�
	//printf("��%d����Ϊ��%d\n", n, f2);
	system("pause");
	return 0;
}

//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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

//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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

//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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

//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen 
int my_strlen_1(char* str)  //�ݹ�
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

//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 
int factorial_1(int n)	//�ݹ�
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
int factorial_2(int n)	//�ǵݹ�
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

//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 
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