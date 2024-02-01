#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>
typedef struct STList
{
	int* a;
	int size;
	int capacity;
}ST;

void STInit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void STDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}
void STPush(ST* ps, int x)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		int newcapacity = (ps->capacity == 0 ? 4 : ps->capacity * 2);
		int* tmp = (int*)realloc(ps->a, sizeof(int) * newcapacity);
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	ps->a[ps->size] = x;
	ps->size++;
}

void STPop(ST* ps)
{
	assert(ps);
	assert(ps->size > 0);
	ps->size--;
}

bool STEmpty(ST* ps)
{
	assert(ps);
	return ps->size == 0;
}

int STTop(ST* ps)
{
	assert(ps);
	assert(ps->size > 0);
	return ps->a[ps->size - 1];
}
void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int GetMidi(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[left] < a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}

		else if (a[left] > a[right])
		{
			return left;
		}
		else
		{
			return right;
		}
	}

	else// a[left] > a[mid]
	{
		if (a[left] < a[right])
		{
			return left;
		}
		else if (a[mid] > a[right])
		{
			return mid;
		}
		else
		{
			return right;
		}
	}
}

int PartSort(int* a, int left, int right)
{
	int midi = GetMidi(a, left, right);
	Swap(&a[left], &a[midi]);


	int keyi = left;
	int prev = left;
	int cur = prev + 1;
	while (cur <= right)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
		{
			Swap(&a[cur], &a[prev]);
		}
		cur++;
	}
	Swap(&a[prev], &a[keyi]);
	return prev;
}



void QuickSortNonR(int* a, int begin, int end)
{
	ST st;//����һ��ջ 
	STInit(&st);//��ʼ��
	STPush(&st, end);
	STPush(&st, begin);
	while (!STEmpty(&st))
	{
		int left = STTop(&st);
		STPop(&st);

		int right = STTop(&st);
		STPop(&st);

		int keyi = PartSort(a, left, right);
		// [lefy,keyi-1] keyi [keyi+1, right]
		if (keyi + 1 < right)
		{
			STPush(&st, right);
			STPush(&st, keyi + 1);
		}

		if (left < keyi - 1)
		{
			STPush(&st, keyi - 1);
			STPush(&st, left);
		}
	}

	STDestroy(&st);
}

int main()
{
	int arr[] = {6,1,2,7,9,3,4,5,10,8};
	QuickSortNonR(arr, 0, (sizeof(arr) / sizeof(int)) - 1);
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d ", arr[i]);
	}
}


//int PartSort1(int* a, int left, int right)
//{
//	int midi = GetMidi(a, left, right);
//	Swap(&a[midi], &a[left]);
//	int keyi = left;
//	while (left < right)
//	{
//		//��С
//		while (left < right && a[right] >= a[keyi])
//		{
//			right--;
//		}
//
//		//�Ҵ�
//		while (left < right && a[left] <= a[keyi])
//		{
//			left++;
//		}
//
//		Swap(&a[left], &a[right]);
//	}
//	Swap(&a[keyi], &a[left]);
//	return left;
//}


//int PartSort2(int* a, int left, int right)
//{
//	int midi = GetMidi(a, left, right);
//	Swap(&a[left], &a[midi]);
//
//	int key = a[left];
//	//����keyֵ�Ժ� ����γɵ�һ����λ
//	int hole = left;
//
//	while (left < right)
//	{
//		//�ұ����ߣ���С�����ߵĿӣ��ұ��γ��µĿ�λ
//		if (left < right && a[right] >= key)
//		{
//			right--;
//		}
//
//		a[hole] = a[right];
//		hole = right;
//
//		//������ߣ��Ҵ���ұߵĿӣ�����γ��µĿ�λ
//		if (left < right && a[left] <= key)
//		{
//			left++;
//		}
//		a[hole] = a[left];
//		hole = left;
//	}
//	a[hole] = key;
//	return hole;
//}


//int PartSort3(int* a, int left, int right)
//{
//	int keyi = left;
//	int prev = left;
//	int cur = prev + 1;
//	while (cur <= right)
//	{
//		if (a[cur] < a[keyi] && ++prev != cur)
//		{
//			Swap(&a[cur], &a[prev]);
//		}
//		cur++;
//	}
//	Swap(&a[keyi], &a[prev]);
//	return prev;
//}
//
//
//void QuickSort(int* a, int begin, int end)
//{
//	if (begin >= end)
//	{
//		return;
//	}
//	int key = PartSort3(a, begin, end);
//	QuickSort(a, begin, key - 1);
//	QuickSort(a, key + 1, end);
//}