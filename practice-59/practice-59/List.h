#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}LTNode;

//����
LTNode* BuyLTNode(LTDataType x);

//��ʼ��
LTNode* LTInit();

//��ӡ
void LTPrint(LTNode* phead);

//β��βɾ
void LTPushBack(LTNode* phead, LTDataType x);
void LTPopBack(LTNode* phead);

//ͷ��ͷɾ
void LTPushFront(LTNode* phead, LTDataType x);
void LTPopFront(LTNode* phead);

//�����С
int LTSize(LTNode* phead);

//��λ��
LTNode* LTFind(LTNode* phead, LTDataType x);

// ��posλ�ò���x
void LTInsert(LTNode* pos, LTDataType x);
// ɾ��posλ��
void LTErase(LTNode* pos);



