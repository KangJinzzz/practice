#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//1.������A�е����ݺ�����B�е����ݽ��н�����������һ���� 
int main()
{
	int A[5] = { 1, 2, 3, 4, 5 };
	int B[5] = { 6, 7, 8, 9, 10 };
	int C[5] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		C[i] = A[i];
		A[i] = B[i];
		B[i] = C[i];
	}
	printf("A[5]=");
	for (int j = 0; j < 5; j++)
	{
		
		printf("%d ",A[j]);
	}
	printf("\n");
	printf("B[5]=");
	for (int j = 0; j < 5; j++)
	{

		printf("%d ", B[j]);
	}
	printf("\n");
	system("pause");
	return 0;
}

//2. ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ�� 
int main()
{
	int i=0;
	float sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum += (1 / (i*pow(-1, (i+1))));
	}
	printf("sum=%f\n", sum);
	system("pause");
	return 0;
}

//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
int main()
{
	int count = 0;
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i - (i % 10) == 90)
			count++;
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}