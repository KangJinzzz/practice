#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>



#if 0
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
void Swap(int *arr, int sz)
{
	int *left = arr;
	int *right = arr;
	right = right + sz - 1;
	int t = 0;
	while (left<right)
	{

		while (((*left % 2) != 0) && (left < right))
		{
			left++;
		}
		while (((*right % 2) == 0) && (left < right))
		{
			right--;
		}
		if (left < right)
		{
			t = *left;
			*left = *right;
			*right = t;
			right--;
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 22, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	Swap(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}



#endif



#if 1
//2.
////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
int Find(int(*arr)[3], int row, int col,int f) 
{
	int i = 0; 
	int j = col-1;
	while ( (i >= 0 ) && (j < col) )
	{
		if (arr[i][j] < f)
		{
			i++;
		}
		else if (arr[i][j] > f)
		{
			j--;
		}
		else if (f == arr[i][j])
		{
			return f;
		}
	}
	return 0;
}

//int *Find(int arr[3][3], int *px, int *py, int key)
//{
//	int *ret = (int *)malloc(2 * (sizeof(int)));
//	int x = 0;
//	int y = *py - 1;
//	while (x < *px && y >= 0)
//	{
//		while (arr[x][y] > key)
//		{
//			y--;
//		}
//		while (arr[x][y] < key)
//		{
//			x++;
//		}
//		while (arr[x][y] > key)
//		{
//			y--;
//			if (arr[x][y] == key)
//			{
//				*px = x;
//				*py = y;
//				ret[0] = px;
//				ret[1] = py;
//				return ret;
//			}
//		}
//
//	}
//}

int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	//printf("%d %d", row, col);
	int ret = Find(arr,row,col,5);
	if (0 == ret)
	{
		printf("û�ҵ���\n");
	}
	else
	{
		printf("�ҵ�%d��!\n", ret);
	}
	system("pause");
	return 0;
}


#endif