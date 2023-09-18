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




// 返回下标，没有找到返回-1
int SLFind(SL* ps, SLDataType x);

// 在pos位置插入x
void SLInsert(SL* ps, int pos, SLDataType x);

// 删除pos位置的值
void SLErase(SL* ps, int pos);

void SLModify(SL* ps, int pos, SLDataType x);
