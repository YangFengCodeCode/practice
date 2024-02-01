#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

//��ӡ
void SLTPrint(SLTNode* phead);

//����
SLTNode* BuySListNode(SLTDataType x);

//β��ͷ��
void SLTPushBack(SLTNode** pphead, SLTDataType x);
void SLTPushFront(SLTNode** pphead, SLTDataType x);

////βɾͷɾ
void SLTPopBack(SLTNode** pphead);
void SLTPopFront(SLTNode** pphead);

//��λ��
SLTNode* SLTFind(SLTNode* phead, SLTDataType x);

// ��pos֮ǰ����x
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

// ��pos�Ժ����x
void SLTInsertAfter(SLTNode* pos, SLTDataType x);

// ɾ��posλ��
void SLTErase(SLTNode** pphead, SLTNode* pos);

// ɾ��pos�ĺ�һ��λ��
void SLTEraseAfter(SLTNode* pos);

void SLTDestroy(SLTNode** pphead);