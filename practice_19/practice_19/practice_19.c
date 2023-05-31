#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void Sort(int *s, int n)
{
	int j = 0;
	for (j = 0; j < n - 1; j++)
	{
		int i = 0;
		int flag = 1;
		for (i = 0; i < n -j- 1; i++)
		{
			if (s[i] > s[i + 1])
			{
				int tmp = s[i];
				s[i] = s[i + 1];
				s[i + 1] = tmp;
				flag = 0;
			}
		}
		if (1 == flag)
			break;
	}

}
int main()
{
	int arr[50] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	Sort(arr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}