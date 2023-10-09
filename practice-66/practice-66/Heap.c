#define _CRT_SECURE_NO_WARNINGS 1

#include"Heap.h"

void HeapInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->size = php->capacity = 0;
}

//����
void HeapDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}

//����
void Swap(HPDataType* p1, HPDataType* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}


//���ϵ���
void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])//�������� �͸ĳ� a[child] > a[parent]
		{
			Swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}


//����
void HeapPush(HP* php, HPDataType x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		int newcapacity = (php->capacity == 0 ? 4 : php->capacity * 2);
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType) * newcapacity);
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		php->a = tmp;
		php->capacity = newcapacity;
	}

	php->a[php->size] = x;
	php->size++;
	AdjustUp(php->a, php->size - 1);
}


//���µ���
void AdjustDown(HPDataType* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		//��С���Ǹ�����
		if (child+1 < n && a[child+1] < a[child])//child+1<n  ��ֹ����Խ�� �����ĳɴ�� �ĳ�>
		{
			child++;
		}
		if (a[child] < a[parent])//������� �ĳ�>
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}


//ɾ��
void HeapPop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;

	AdjustDown(php->a, php->size, 0);
}


//��ӡ
void HeapPrint(HP* php)
{
	assert(php);
	for (size_t i = 0; i < php->size; i++)
	{
		printf("%d ", php->a[i]);
	}
	printf("\n");
}

//���ضѶ�
HPDataType HeapTop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	return php->a[0];
}

bool HeapEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}

//��Ϊ�շ���1 true
//�Ѳ�Ϊ�� ����0 false