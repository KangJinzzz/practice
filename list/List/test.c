#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"


int main()
{
	Node head;
	InitList(&head);
	InsertHead(&head, 12);
	InsertHead(&head, 55);
	InsertHead(&head, 38);
	InsertHead(&head, 24);
	InversionList2(&head);
	Show(&head);
	//Findlist(&head, 55);


	return 0;
}

