#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

//��ӡ
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

//����
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

//β��
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

//ͷ��
void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
	
}

//βɾ
void SLTPopBack(SLTNode** pphead)
{
	//��
	assert(*pphead);

	//һ���ڵ�
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


//ͷɾ
void SLTPopFront(SLTNode** pphead)
{
	assert(*pphead);

	SLTNode* newhead = (*pphead)->next;
	free(*pphead);
	*pphead = newhead;

}

//��λ��
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


// ��pos֮ǰ����x
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

// ��pos�Ժ����x
void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
	
}

// ɾ��posλ��
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

// ɾ��pos�ĺ�һ��λ��
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);//���pos�Ƿ���β�ڵ�
	SLTNode* posNext = pos->next;

	pos->next = posNext->next;
	free(posNext);
	posNext = NULL;
}


//����
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

