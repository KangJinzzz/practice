#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"
//初始化
void InitList(pList plsit)
{
	assert(plsit != NULL);
	plsit->data = -1;
	plsit->next = NULL;
}

//得到一个节点
static Node *GetNode(int val)
{
	Node *pGet = (Node *)malloc(sizeof(Node));
	assert(pGet != NULL);
	pGet->data = val;
	pGet->next = NULL;
	return pGet;
}

//头插   plist:  头结点的地址
void InsertHead(pList plist, int val)//55
{
	Node *pGet = GetNode(val);
	assert(plist != NULL);
	pGet->next = plist->next;
	plist->next = pGet;
}
//打印
void Show(pList plist)
{
	assert(plist != NULL);
	Node *p = plist->next;
	while (p != NULL)
	{
		printf("%d\n", p->data);
		p = p->next;
	}
}

//尾插法
void InsertTail(pList plist, int val)
{
	Node *pGet = GetNode(val);
	assert(plist != NULL);
	Node *p = plist;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = pGet;
}
//寻找倒数第k个结点
Node *LastNode(pList plist, int k)
{
	int i = 0;
	assert(plist != NULL);
	Node *p = plist;
	Node *q = plist;
	if (k < 0)
	{
		return NULL;
	}


	for (i = 0; i < k - 1; i++)
	{
		if (q->next == NULL)
		{
			return NULL;
		}
		q = q->next;
	}
	while (q->next != NULL)
	{
		p = p->next;
		q = q->next;
	}
	return p;
}

//链表逆置
void InversionList(pList plist)
{
	assert(plist != NULL);
	Node *pCunr = plist->next;
	Node *pCunrN = NULL;
	plist->next = NULL;
	while (pCunr != NULL)
	{
		pCunrN = pCunr->next;
		pCunr->next = plist->next;
		plist->next = pCunr;
		pCunr = pCunrN;
	}
}
Node * InversionList2(pList plist) //打印函数需要重写
{
	assert(plist != NULL);
	Node *rever_head = NULL;
	Node *prev = NULL;
	Node *pCunr = plist->next;
	Node *pCunrN = NULL;
	
	while (pCunr != NULL)
	{
		pCunrN = pCunr->next;
		if (pCunrN == NULL)
		{
			rever_head = pCunr;
		}
		pCunr->next = prev;
		prev = pCunr;
		pCunr = pCunrN;

	}
	return rever_head;
}

//查找
Node *Findlist(pList plist, int val)
{
	assert(plist != NULL);
	Node *p = plist->next;
	while (p != NULL)
	{
		if (p->data == val)
		{
			printf("%d\n", p->data);
			return p;
		}
		p = p->next;
	}
	return NULL;
}