#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#if 1
//1.
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ������������

int main()
{
	int A,B,C,D,E;
	for(A=1; A<6; A++)
	{
		for(B=1; B<6; B++)
		{
			for(C=1; C<6; C++)
			{
				for (D = 1; D<6; D++)
				{
					for (E = 1; E<6; E++)
					{
						if (((B == 2) + (A == 3) == 1)
							&& ((B == 2) + (E == 4) == 1)
							&& ((C == 1) + (D == 2) == 1)
							&& ((C == 5) + (D == 3) == 1)
							&& ((E == 4) + (A == 1) == 1))
						{

							if ((B != D) && (A != D) && (A + B + C + D + E) == 15)
								printf("A=%d, B=%d, C=%d, D=%d, E=%d\n", A, B, C, D, E);
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}


#endif

#if 0
//2.
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4����
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C�� 
//C˵����D�� 
//D˵��C�ں�˵ 
//��֪3����˵���滰��1����˵���Ǽٻ��� 
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡� 
int main()
{

	int killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if (('A' != killer) + ('C' == killer) + ('D' == killer) + ('D' != killer) == 3)
			printf("%c\n", killer);
	}
	system("pause");
	return 0;
}

#endif
#if 0
//3.����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1


int main()
{
	int i, j, n = 0;
	int a[100][100] = { 0 };
	printf("������Ҫ��ӡ�������������:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		a[i][0] = 1;
	}
	for (i = 1; i < n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

#endif