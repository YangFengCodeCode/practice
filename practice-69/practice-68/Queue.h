#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int QDataType;

typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType val;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
	int size;
}Que;

void QueueInit(Que* pq);

void QueueDestroy(Que* pq);

void QueuePush(Que* pq, QDataType x);

bool QueueEmpty(Que* pq);

void QueuePop(Que* pq);

