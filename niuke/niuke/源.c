#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//��ӡ���в�����n��n<256���ģ���ƽ�����жԳ����ʵ�������11*11=121��
int main()
{
	int n, i, num, temp, m;
	n = 256;
	i = 1;
	while (i<256)
	{
		num = i*i;
		m = 0;
		while (num>0)
		{
			temp = num % 10;        //ȡ���һλ
			m = temp + m * 10;         //
			num = num / 10;
		}
		if (m == i*i)
		{
			printf("%d\n", i);
		}
		i++;
	}
	system("pause");
	return 0;
}