#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;
}SL;

void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps);
void SLCheckCapacity(SL* ps);

void SLPushBack(SL* ps, SLDataType x);
void SLPopBack(SL* ps);
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);




// �����±꣬û���ҵ�����-1
int SLFind(SL* ps, SLDataType x);

// ��posλ�ò���x
void SLInsert(SL* ps, int pos, SLDataType x);

// ɾ��posλ�õ�ֵ
void SLErase(SL* ps, int pos);

void SLModify(SL* ps, int pos, SLDataType x);
