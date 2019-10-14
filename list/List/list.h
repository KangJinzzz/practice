#ifndef __LIST_H__
#define __LIST_H__
//#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
}Node, *pList;

//初始化
void InitList(pList plsit);

//头插
void InsertHead(pList plist, int val);
//尾插
void InsertTail(pList plist, int val);
//打印
void Show(pList plist);


//任意位置插入

//删除

//查找
Node *Findlist(pList plist, int val);


//寻找倒数第k个结点
Node *LastNode(pList plist, int k);

//逆置单链表
void InversionList(pList plist);


#endif //__LIST_H__