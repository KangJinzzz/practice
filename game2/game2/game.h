#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define EASY_GOAL 10   //�����׵�����
#define ROW 9   //������Ϸ�Ĺ�ģ
#define COL 9	//������Ϸ�Ĺ�ģ

#define ROWS (ROW+2)
#define COLS (COL+2)



void menu();
void game();
void Initboard(char arr[ROWS][COLS], int row, int col, char set);  //��ʼ����ά����
void set_mine(char arr[ROWS][COLS], int row, int col);  //��������׵�λ��
void Printboard(char arr[ROWS][COLS], int row, int col);  //��ӡ��Ϸ����
void Judge(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col); //�ж���Ϸ���
int Count(char arr[ROWS][COLS], int x, int y);			//�ж���ѡ��λ��Χ�۵�����
void Unfold(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);  //չ����Χû���׵�����
