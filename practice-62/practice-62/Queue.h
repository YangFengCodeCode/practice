#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int QDataType;
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
	int size;
}Que;

//��ʼ��
void QueueInit(Que* pq);

//����
void QueueDestroy(Que* pq);

//����
void QueuePush(Que* pq, QDataType x);

//ɾ��
void QueuePop(Que* pq);

//����ͷ����
QDataType QueueFront(Que* pq);

//����β����
QDataType QueueBack(Que* pq);

//�Ƿ�Ϊ��
bool QueueEmpty(Que* pq);

//�����С
int QueueSize(Que* pq);


