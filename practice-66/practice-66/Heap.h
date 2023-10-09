#pragma once
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>
#include<stdio.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;

//���ϵ���
void AdjustUp(HPDataType* a, int child);

//���µ���
void AdjustDown(HPDataType* a, int n, int parent);

//����
void Swap(HPDataType* p1, HPDataType* p2);
//��ӡ
void HeapPrint(HP* php);
//��ʼ��
void HeapInit(HP* php);
//����
void HeapDestroy(HP* php);
//����
void HeapPush(HP* php, HPDataType x);
//ɾ��
void HeapPop(HP* php);
//���ضѶ�
HPDataType HeapTop(HP* php);
//�Ƿ�Ϊ��
bool HeapEmpty(HP* php);




