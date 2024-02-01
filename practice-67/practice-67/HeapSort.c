#define _CRT_SECURE_NO_WARNINGS 1


//void Swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}

////降序 建小堆
//void AdjustUp(int* a, int child)
//{
//	int parent = (child - 1) / 2;
//	while (child > 0)
//	{
//		if (a[child] < a[parent])
//		{
//			Swap(&a[child], &a[parent]);
//			child = parent;
//			parent = (child - 1) / 2;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//void AdjustDown(int* a, int n, int parent)
//{
//	int child = parent * 2 + 1;
//	while (child < n)
//	{
//		if (child + 1 < n && a[child + 1] < a[child])
//		{
//			child++;
//		}
//
//		if (a[child] < a[parent])
//		{
//			Swap(&a[child], &a[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//
//		else
//		{
//			break;
//		}
//	}
//}



//升序 建大堆
//void AdjustUp(int* a, int child)
//{
//	int parent = (child - 1) / 2;
//	while (child > 0)
//	{
//		if (a[child] > a[parent])
//		{
//			Swap(&a[child], &a[parent]);
//			child = parent;
//			parent = (child - 1) / 2;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//void AdjustDown(int* a, int n, int parent)
//{
//	int child = parent * 2 + 1;
//	while (child < n)
//	{
//		if (child + 1 < n && a[child + 1] > a[child])
//		{
//			child++;
//		}
//
//		if (a[child] > a[parent])
//		{
//			Swap(&a[child], &a[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//
//		else
//		{
//			break;
//		}
//	}
//}

//void HeapSort(int* a, int n)
//{
//	int end = n - 1;
//	int i = 0;
//	//建堆
//	for (i = 0; i < n; i++)
//	{
//		AdjustUp(a, i);
//	}
//
//	while (end > 0)
//	{
//		Swap(&a[0], &a[end]);
//		AdjustDown(a, end, 0);
//		end--;
//	}
//}


//void HeapSort(int* a, int n)
//{
//	int end = n - 1;
//	int i = 0;
//	//建大堆
//	for (i = (n-1-1) / 2; i >= 0; i--)
//	{
//		AdjustDown(a, n, i);
//	}
//
//	while (end > 0)
//	{
//		Swap(&a[0], &a[end]);
//		AdjustDown(a, end, 0);
//		end--;
//	}
//}
//int main()
//{
//	int a[] = { 2, 3, 5, 7, 4, 6, 8, 65, 100, 70, 32, 50, 60};
//	HeapSort(a, sizeof(a) / sizeof(int));
//	return 0;
//}
//
//




#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef int HPDataType;

void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}


void AdjustDown(HPDataType* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] < a[child])
		{
			child++;
		}

		if (a[child] < a[parent])
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

void PrintTopK(const char* filename, int k)
{
	//1 建堆--用a中前K个元素建堆(小堆)
	FILE* fout = fopen(filename, "r");
	if (fout == NULL)
	{
		perror("fopen fail");
		return;
	}

	int* minheap = (int*)malloc(sizeof(int) * k);
	if (minheap == NULL)
	{
		perror("malloc fail");
		return;
	}

	for (int i = 0; i < k; i++)
	{
		fscanf(fout, "%d", &minheap[i]);
	}

	//前K个建小堆
	for (int i = (k-2) / 2; i >= 0; i--)
	{
		AdjustDown(minheap, k, i);
	}

	//2 将剩余n-k元素与堆顶元素比较, 满足就交换
	int x = 0;
	while (fscanf(fout, "%d", &x) != EOF)
	{
		if (x > minheap[0])
		{
			//替换进堆
			minheap[0] = x;
			AdjustDown(minheap, k, 0);
		}
	}

	for (int i = 0; i < k; i++)
	{
		printf("%d ", minheap[i]);
	}
	printf("\n");
	fclose(fout);

}

void CreateDate()
{
	//造数据
	int n = 100000;
	srand(time(0));
	const char* file = "data.txt";
	FILE* fin = fopen(file, "w");
	if (fin == NULL)
	{
		perror("fopen error");
		return;
	}

	for (int i = 0; i < n; i++)
	{
		int x = (rand() + i) % n;
		fprintf(fin, "%d\n", x);
	}

	fclose(fin);
}

int main()
{
	CreateDate();
	PrintTopK("data.txt", 5);
	return 0;
}