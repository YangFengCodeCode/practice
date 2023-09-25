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

//初始化
void QueueInit(Que* pq);

//销毁
void QueueDestroy(Que* pq);

//插入
void QueuePush(Que* pq, QDataType x);

//删除
void QueuePop(Que* pq);

//返回头数据
QDataType QueueFront(Que* pq);

//返回尾数据
QDataType QueueBack(Que* pq);

//是否为空
bool QueueEmpty(Que* pq);

//计算大小
int QueueSize(Que* pq);


