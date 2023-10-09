#define _CRT_SECURE_NO_WARNINGS 1

#include"Heap.h"

void HeapInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->size = php->capacity = 0;
}

//销毁
void HeapDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = php->capacity = 0;
}

//交换
void Swap(HPDataType* p1, HPDataType* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}


//向上调整
void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])//如果建大堆 就改成 a[child] > a[parent]
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


//插入
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


//向下调整
void AdjustDown(HPDataType* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		//找小的那个孩子
		if (child+1 < n && a[child+1] < a[child])//child+1<n  防止数据越界 如果想改成大堆 改成>
		{
			child++;
		}
		if (a[child] < a[parent])//如果想大堆 改成>
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


//删除
void HeapPop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;

	AdjustDown(php->a, php->size, 0);
}


//打印
void HeapPrint(HP* php)
{
	assert(php);
	for (size_t i = 0; i < php->size; i++)
	{
		printf("%d ", php->a[i]);
	}
	printf("\n");
}

//返回堆顶
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

//堆为空返回1 true
//堆不为空 返回0 false