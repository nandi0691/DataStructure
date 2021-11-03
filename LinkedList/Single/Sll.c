#include<stdio.h>
#include <stdlib.h>
#include "Sll.h"

void AddData(int data)
{
	if(head == NULL)
	{
		head = (struct Node *)malloc(sizeof(struct Node));
		head->data = data;
		head->pNext = NULL;
		return;
	}

	struct Node * node = head;
	struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
	while(node->pNext != NULL)
	{
		node = node->pNext;
	}
	node->pNext = newNode;
	newNode->data = data;
	newNode->pNext = NULL;
	

}
int main()
{
	AddData(10);
}
