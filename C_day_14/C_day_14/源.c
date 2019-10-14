#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#if 0
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//
//����һ
void left_move(char *str, int k)
{
	int i = 0;
	char temp = 0;
	char *left = str;

	for (i = 0; i < k; i++)
	{
		left = str;
		while (*(left + 1) != '\0')
		{
			temp = *left;
			*left = *(left + 1);
			*(left + 1) = temp;
			left++;
		}
	}
}
//������
void swap(char *left, char *right)
{
	int t = 0;
	while (left < right)
	{
		t = *left;
		*left = *right;
		*right = t;
		left++;
		right--;
	}
}
void left_move2(char *str, int k)
{
	swap(str, str+k-1);
	swap(str + k, str + strlen(str) - 1);
	swap(str, str + strlen(str) - 1);
}
int main()
{
	int k = 0;
	char str[] = "ABCDEFG";
	scanf("%d", &k);
	left_move2(str, k);
	printf("%s\n", str);
	system("pause");
	return 0;
}

#endif


#if 1
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC

int is_left_move(char *arr, const char *p)
{
	int i = 0;
	int k = 0;
	char temp = 0;
	char *left = arr;

	while (*left != '\0')
	{
		k++;
		left++;
	}

	for (i = 0; i < k-1; i++)
	{
		left = arr;
		while (*(left + 1) != '\0')
		{
			temp = *left;
			*left = *(left + 1);
			*(left + 1) = temp;
			left++;
		}
		if (0 == (strcmp(arr, p)))
		{
			return 1;
		}
	}
	return 0;
}
//�Ż�
int is_left_move2(char *arr, const char *p)
{
	strncat(arr, arr, strlen(arr));
	char *ret = strstr(arr, p);
	if (ret != NULL)
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
	char arr1[20] = "AABCD";
	char arr2[] = "BCDAA";
	int ret = is_left_move2(arr1, arr2);
	if (1 == ret)
	{
		printf("YES\n");
	}
	else 
	{
		printf("NO\n");
	}
	return 0;
}

#endif