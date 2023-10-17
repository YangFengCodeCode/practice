#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void InsertSort(int* a, int n)
{
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;//因为前面end--了 所以这里是a[end+1]
	}
}

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		//gap /= 2;
		gap = gap / 3 + 1;//这样可以更快

		//直接插入排序思想
		for (int i = 0; i < n- gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}

				else
				{
					break;
				}
			}

			a[end + gap] = tmp;
		}
	}
}


void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void AdjustDown(int* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] > a[child])
		{
			child++;
		}
		if (a[child] > a[parent])
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


void HeapSort(int* a, int n)
{
	//向下调整建堆
	//O(N)
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}

	//堆排序
	//O(N*logN)
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}


void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int mini = begin;
		int maxi = begin;
		for (int i = begin + 1; i <= end; i++)
		{
			if (a[i] < a[mini])
			{
				mini = i;
			}

			if (a[i] > a[maxi])
			{
				maxi = i;
			}
		}

		Swap(&a[mini], &a[begin]);
		//检查maxi是否被换走了
		if (maxi == begin)
		{
			maxi = mini;
		}
		Swap(&a[maxi], &a[end]);
		begin++;
		end--;
	}
}


int PartSort1(int* a, int left, int right)
{
	int key = left;
	while (left < right)
	{
		//找小
		while (left < right && a[right] > a[key])
		{
			right--;
		}

		//找大
		while (left < right && a[left] < a[key])
		{
			left++;
		}
		Swap(&a[left], &a[right]);
	}
	Swap(&a[left], &a[key]);
	return left;
}

int PartSort2(int* a, int left, int right)
{
	int key = left;
	int prev = left;
	int cur = prev + 1;
	while (cur <= right)
	{
		if (a[cur] < a[key] && ++prev != cur)
		{
			Swap(&a[cur], &a[prev]);
		}
		cur++;
	}
	Swap(&a[prev], &a[key]);
	return prev;
}
void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}
	int key = PartSort2(a, begin, end);
	QuickSort(a, begin, key - 1);
	QuickSort(a, key + 1, end);
}

void _MergeSort(int* a, int* tmp, int begin, int end)
{
	if (end <= begin)
	{
		return;
	}
	int mid = (begin + end) / 2;
	_MergeSort(a, tmp, begin, mid);
	_MergeSort(a, tmp, mid + 1, end);

	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;

	int index = begin;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[index++] = a[begin1++];
		}
		else
		{
			tmp[index++] = a[begin2++];
		}
	}

	while (begin1 <= end1)
	{
		tmp[index++] = a[begin1++];
	}

	while (begin2 <= end2)
	{
		tmp[index++] = a[begin2++];
	}

	memcpy(a + begin, tmp + begin, (end - begin + 1) * sizeof(int));


}
void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	_MergeSort(a, tmp, 0, n - 1);
	free(tmp);
}
int main()
{
	int arr[] = { 2, 3, 5, 7, 4, 6, 8};
	//InsertSort(arr, sizeof(arr) / sizeof(int));//排升序
	//InsertSort(arr, sizeof(arr) / sizeof(int));//排升序
	//HeapSort(arr, sizeof(arr) / sizeof(int));//排升序
	//QuickSort(arr, 0, (sizeof(arr)/sizeof(int))-1);//排升序

	MergeSort(arr, sizeof(arr) / sizeof(int));//排升序
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d ", arr[i]);
	}
}