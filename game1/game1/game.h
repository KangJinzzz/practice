
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define ROW 3	//��		�趨��Ϸ��ģ
#define COL 3	//��

void menu();
void game();
void Initboard(char board[ROW][COL], int row, int col);  //��ʼ������	
void Printboard(char board[ROW][COL], int row, int col);		//��ӡ����
void palyer_move(char board[ROW][COL], int row, int col);	//�������
void computer_move(char board[ROW][COL], int row, int col);	//��������
char Judge(char board[ROW][COL], int row, int col);   //�ж���Ӯ���������Ӯ���ء�*��������Ӯ���ء�#����
												  //ƽ�ַ��ء�p��,��Ϸδ�ֳ�ʤ�������ء�c��