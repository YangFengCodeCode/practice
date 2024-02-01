#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

//初始化
void SLInit(SL* ps)
{
	assert(ps);
	ps->a = (SLDataType*)malloc(sizeof(SLDataType)*4);
	if (ps->a == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}

//销毁
void SLDestroy(SL* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//打印

void SLPrint(SL* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

//检查扩容
void SLCheckCapacity(SL* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		SLDataType* tmp = (SLDataType*)realloc(ps->a, sizeof(SLDataType) * (ps->capacity) * 2);
		if (tmp == NULL)
		{
			perror("realloc failed");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity *= 2;
	}
}


//尾插
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);//检查是否要扩容
	ps->a[ps->size] = x;
	ps->size++;

}


//尾删
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size > 0);
	//ps->a[ps->size-1] = 0;
	ps->size--;
}

//头插
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	int tmp = ps->size;
	while (tmp > 0)
	{
		ps->a[tmp] = ps->a[tmp - 1];
		tmp--;
	}
	ps->a[0] = x;
	ps->size++;
}

//头删
void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size > 0);
	int begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size--;
}


// 返回下标，没有找到返回-1
int SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

// 在pos位置插入x
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos<= ps->size);
	SLCheckCapacity(ps);
	int end = ps->size;

	while (end > pos)
	{
		ps->a[end] = ps->a[end - 1];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
	
}


// 删除pos位置的值
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos <ps->size);
	SLCheckCapacity(ps);
	while (pos < ps->size)
	{
		ps->a[pos] = ps->a[pos + 1];
		pos++;
	}
	ps->size--;
}


//修改pos位置的值
void SLModify(SL * ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	ps->a[pos] = x;
}




//int removeElement(int* nums, int numsSize, int val) {
//	int src = 0;
//	int dst = 0;
//	while (src < numsSize)
//	{
//		if (nums[src] != val)
//		{
//			nums[dst] = nums[src];
//			dst++;
//		}
//		src++;
//	}
//	return dst;
//
//}


//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//	int end1 = m - 1; int end2 = n - 1; int end = m + n - 1;
//	while (end1 >= 0 && end2 >= 0)
//	{
//		if (nums1[end1] < nums2[end2])
//		{
//			nums1[end] = nums2[end2];
//			end2--;
//		}
//		else
//		{
//			nums1[end] = nums1[end1];
//			end1--;
//		}
//		end--;
//	}
//	while (end2 >= 0)
//	{
//		nums1[end] = nums2[end2];
//		end--;
//		end2--;
//	}
//
//}