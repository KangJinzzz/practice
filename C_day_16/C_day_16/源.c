#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#if 1
//1.ģ��ʵ��strcpy
char *MyStrcpy(char *dest, const char *src)
{
	char *p = dest;
	assert(dest != NULL && src != NULL);
	while (*dest++ = *src++);
	return p;
}
//2.ʵ��strcat 
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

//3.ʵ��strstr
const char *MyStrstr(const char *str1, const char *str2)
{
	const char *start = str1;
	const char *s1 = str1;
	const char *s2 = str2;
	assert(str1 != NULL && str2 != NULL);
	while (*start != '\0')
	{
		s1 = start;
		s2 = str2;
		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return start;
		}
		if (*s1 == '\0')
		{
			return NULL;
		}

		start++;
	}
	return NULL;
}

//4.ʵ��strchr
const char * MyStrchr(const char *str, int c) //���ڲ����ַ������ַ��������״γ��ֵ�λ�ã����δ�ҵ��򷵻�NULL.
{
	assert(str != NULL);
	while (*str != '\0')
	{
		if (*str == c)
		{
			return str;
		}
		str++;
	}
	return NULL;
}
//5.ʵ��strcmp
int MyStrcmp(const char *str1, const char *str2)
{
	assert(str1 != NULL && str2 != NULL && str1 != NULL);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else 
	{
		return -1;
	}
}
//6.ʵ��memcpy
void *MyMemcpy(void *dest, const void *src, size_t count)
{
	unsigned int i = 0;
	char *p = dest;
	assert(dest != NULL&&src != NULL);
	while (i++ < count)
	{
		*(char *)dest = *(char *)src;
		((char *)dest)++;
		((char *)src)++;
	}
	return p;
}

//7.ʵ��memmove
void *MyMemmove(void *dest, const void *src, size_t count)
{
	unsigned int i = 0;
	char *p = dest;
	assert(dest != NULL&&src != NULL);
	if (src < dest)
	{
		dest = ((char *)dest) - 1 + count;
		src = ((char *)src) - 1 + count;
		while (i++ < count)
		{

			*(char *)dest = *(char *)src;
			((char *)dest)--;
			((char *)src)--;
		}
	}
	else
	{
		i = 0;
		while (i++ < count)
		{
			*(char *)dest = *(char *)src;
			((char *)dest)++;
			((char *)src)++;
		}
	}
	return p;
}
int main()
{
	char arr[20] = "123456789";
	char *str = "ddf";
	MyMemmove(arr, arr+2, 4);
	printf("%s\n", arr);
	system("pause");
	return 0;

}

#endif