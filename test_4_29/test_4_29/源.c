#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#include<string.h>
//1.��ɲ�������Ϸ
void menu()
{
	printf("************************\n");
	printf("*******  1.play  *******\n");
	printf("*******  0.exit  *******\n");
	printf("************************\n");

}
void game()
{
	int i = rand()%100+1;
	int n = 0;
	while (1)
	{
		printf("������Ҫ�µ����֣�\n");
		scanf("%d", &n);
		if (n > i)
		{
			printf("�´���!\n");
		}
		else if (n < i)
		{
			printf("��С��!\n");
		}
		else
		{
			printf("�¶���!\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:game(); 
			break;
		case 0:
			break;
		default:printf("�������������ѡ��\n");
		}
	} while (input);
	system("pause");
	return 0;
}

//2.�۰����
//void binary_search(int *arr, int right, int k) //���ֲ��Һ���
//{
//	int left = 0;  //lefΪ�����һ��Ԫ���±꣬rightΪ�������һ��Ԫ���±�
//	while (left <= right)
//	{
//		int mid = (left + right) / 2; //midΪ�м�Ԫ���±�
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (mid[arr] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//		printf("�Ҳ�����\n");
//}
//int main()
//{
//	int n;
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int ret = sizeof(a) / sizeof(a[0]) - 1;
//	printf("������Ҫ���ҵ�����\n");
//	scanf("%d", &n);
//	binary_search(a, ret, n);//���ú�����������
//	system("pause");
//	return 0;
//}
//
////3.��д����ģ��������������ĳ���
//int main()
//{
//	int i = 0;
//	char s[20] = "heaoismyson";
//	char input[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺\n", i);
//		scanf("%s", input);
//		if (strcmp(s, input) == 0)
//		{
//			printf("��½�ɹ���\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("�˳�����\n");
//	}
//	system("pause");
//	return 0;
//}
//
////4.��дһ�����򣬿���һֱ���ռ����ַ��� �����Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
//int main()
//{
//	char input='a';
//	while (1)
//	{
//		scanf("%c", &input);
//		if ((input >= 65) && (input <= 90))
//		{
//			printf("%c\n", input + 32);
//		}
//		else if ((input >= 97) && (input <= 122))
//		{
//			printf("%c\n", input - 32);
//		}
//
//	}
//
//	system("pause");
//	return 0;
//}