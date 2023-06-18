#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[101] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int m = 0;
//	scanf("%d", &m);
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == m)
//		{
//			arr[i] = 0;
//		}
//		else
//			count++;
//	}
//	printf("%d\n", count);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int y = 0;
	int month = 0;
	int day = 0;
	scanf("%d %d %d", &y, &month, &day);
	printf("%d/%d/%d", day, month, y);

	return 0;
}