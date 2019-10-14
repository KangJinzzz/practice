#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int Int_cmp(const void *elem1, const void *elem2)
{
	return *((int *)elem1) - *((int *)elem2);
}
int Char_cmp(const void *elem1, const void *elem2)
{
	return *((char *)elem1) - *((char *)elem2);
}

void MySort(void *arr, int len, int size, int (*cmp)(const void *elem1, const void *elem2))
{
	int i = 0;
	int j = 0;
	int k = 0;
	int flg = 0;
	for (i = 0; i < len - 1; i++)
	{
		flg = 0;
		for (j = 0; j < len - 1 - i; j++)
		{
			if (cmp((char*)arr + j*size,
				(char*)arr + (j + 1)*size) > 0)
			{
				for (k = 0; k < size; k++)
				{
					char t = *((char*)arr + j*size + k);
					*((char*)arr + j*size + k) = *((char*)arr + (j + 1)*size + k);
					*((char*)arr + (j + 1)*size + k) = t;
				}
				flg = 1;
			}
		}
		if (flg = 0)
		{
			break;
		}
	}
}
void show_int(int *arr, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void show_char(char *arr, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr1[10] = { 11,2,3,4,5,6,7,8,9,10 };
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	char arr2[5] = {'a','f','d','e','b'};
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	MySort(arr1, len1, sizeof(int),Int_cmp);
	show_int(arr1, len1);
	MySort(arr2, len2, sizeof(char),Char_cmp);
	show_char(arr2, len2);
	system("pause");
	return 0;
}