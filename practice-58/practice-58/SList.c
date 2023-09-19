#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

//打印
void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");

}

//扩容
SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

//尾插
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}

}

//头插
void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
	
}

//尾删
void SLTPopBack(SLTNode** pphead)
{
	//空
	assert(*pphead);

	//一个节点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* tail = *pphead;
		SLTNode* tailPrev = *pphead;
		while (tail->next)
		{
			tailPrev = tail;
			tail = tail->next;
		}
		free(tail);
		tailPrev->next = NULL;
	}
}


//头删
void SLTPopFront(SLTNode** pphead)
{
	assert(*pphead);

	SLTNode* newhead = (*pphead)->next;
	free(*pphead);
	*pphead = newhead;

}

//找位置
SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;
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


// 在pos之前插入x
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(*pphead);
	assert(pos);
	if (pos == 0)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		SLTNode* newnode = BuySListNode(x);
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newnode;
		newnode->next = pos;
	}
}

// 在pos以后插入x
void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
	
}

// 删除pos位置
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(*pphead);
	assert(pos);
	if (pos == *pphead)
	{
		SLTPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}
}

// 删除pos的后一个位置
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);//检查pos是否是尾节点
	SLTNode* posNext = pos->next;

	pos->next = posNext->next;
	free(posNext);
	posNext = NULL;
}


//销毁
void SLTDestroy(SLTNode** pphead)
{
	assert(pphead);
	SLTNode* cur = *pphead;
	while (cur)
	{
		SLTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*pphead = NULL;
}

