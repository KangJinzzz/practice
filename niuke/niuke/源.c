#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//打印所有不超过n（n<256）的，其平方具有对称性质的数。如11*11=121。
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
			temp = num % 10;        //取最后一位
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