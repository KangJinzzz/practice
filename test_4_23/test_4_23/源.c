#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//1.输出菱形
int main()
{
	char a[] = "*************";
	char b[] = "      *      ";
	char c[] = "             ";
	int mid = (strlen(a) - 1) / 2;
	int left = mid-1;
	int right = mid+1;
	while ((left>=0) || (right<=strlen(a) - 1))
	{
		printf("%s\n", b);
		b[left] = a[left];
		b[right] = a[right];
		left--;
		right++;
	}
	while ((left<=mid) || (right>=mid + 2))
	{
		b[left] = c[left];
		b[right] = c[right];
		left++;
		right--;
		printf("%s\n", b);
	}
	system("pause");
	return 0;
}

//2.水仙花
int main()
{
	int i = 0;
	for (i = 0; i <= 999; i++)
	{
		if (pow(i / 100, 3) + pow(((i / 10) % 10), 3) + pow(i % 10, 3) == i)
			printf("%d ", i);
	}
	printf("\n");
	system("pause");
	return 0;
}

//3.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和
int main()
{
	int i = 0;
	int j = 0;
	int t = 0;
	int n = 0;
	int sum = 0;
	int sn = 0;
	scanf("%d", &n);
	for (i = 0; i <= 4; i++)
	{
		t = n*pow(10, i);
		sum += t;
		sn += sum;
	}
	printf("sn=%d\n", sn);
	system("pause");
	return 0;
}