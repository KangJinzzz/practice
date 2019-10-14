#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

//1.模拟实现strncpy
char *MyStrncpy(char *dest, const char *src, size_t n)
{
	char *p = dest;
	unsigned int i = 0;
	assert(dest != NULL&&src != NULL);
	while (i++ < n)
	{
		*dest++ = *src++;
	}
	return p;
}
//2.模拟实现strncat
char *MyStrncat(char *dest, const char *src, size_t n)
{
	char *p = dest;
	unsigned int i = 0;
	assert(dest != NULL&&src != NULL);
	while (*dest != NULL)
	{
		dest++;
	}
	while (i++ < n)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return 0;
}
//3.模拟实现strncmp
int MyStrncmp(const char *str1, const char *str2, size_t n)
{
	int ret = 0;
	unsigned int i = 0;
	assert(str1 != NULL&&str2 != NULL);
	while (i++ < n && (ret = (*str1 - *str2)) == 0 && str1 != '\0');
	return ret;
}
int main()
{
	char arr[20] = "cbcdefg";
	char *str = "jbcd";
	//MyStrncpy(arr, str, 3);
	//MyStrncat(arr, str, 5);
	printf("%d\n", MyStrncmp(arr,str,4));
	//system("pause");
	return 0;
}
