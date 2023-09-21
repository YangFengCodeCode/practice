#define _CRT_SECURE_NO_WARNINGS 1

#include"List.h"

//扩容
LTNode* BuyLTNode(LTDataType x)
{
	LTNode* node = (LTNode*)malloc(sizeof(LTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}

	node->data = x;
	node->next = NULL;
	node->prev = NULL;

	return node;
}


//初始化
LTNode* LTInit()
{
	LTNode* phead = BuyLTNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

//打印
void LTPrint(LTNode* phead)
{
	assert(phead);
	printf("phead <=>");
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf(" %d <=>", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

//尾插
void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyLTNode(x);
	LTNode* tail = phead->prev;
	
	tail->next = newnode;
	newnode->prev = tail;
	
	newnode->next = phead;
	phead->prev = newnode;
}



void LTPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	LTNode* tail = phead->prev;
	LTNode* tailPrev = tail->prev;
	free(tail);

	phead->prev = tailPrev;
	tailPrev->next = phead;
	
}


//头插
void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyLTNode(x);
	
	newnode->next = phead->next;
	phead->next->prev = newnode;

	phead->next = newnode;
	newnode->prev = phead;
}

void LTPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	LTNode* first = phead->next;
	LTNode* second = first->next;

	free(first);

	phead->next = second;
	second->prev = phead;
}

LTNode* LTFind(LTNode* phead, LTDataType x)
{
	LTNode* cur = phead->next;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}

		cur = cur->next;
	}

	return NULL;
}

// 在pos位置插入x
void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);
	LTNode* newnode = BuyLTNode(x);
    LTNode* posPrev = pos->prev;

	posPrev->next = newnode;
	newnode->prev = posPrev;

	newnode->next = pos;
	pos->prev = newnode;
}


// 删除pos位置
void LTErase(LTNode* pos)
{
	assert(pos);
	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;
	free(pos);

	posPrev->next = posNext;
	posNext->prev = posPrev;
}
