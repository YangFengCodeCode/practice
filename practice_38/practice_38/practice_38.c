#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1001] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int flag = 1;
//		scanf("%d", &arr[i]);
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			if (arr[j] == arr[i])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	
//	return 0;
//}


#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int i = 0;
	int arr[201];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = n; i < n + m; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n + m-1; i++)
	{
		int j = 0;
		for (j = 0; j < n + m - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}

	}

	for (i = 0; i < n + m; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}