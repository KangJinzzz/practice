#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#if 0
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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

//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
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
//3.���ʵ�֣� 
//һ��������ֻ��һ�����ֳ�����һ�Ρ�
//�����������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩 
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
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���

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