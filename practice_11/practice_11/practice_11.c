#define _CRT_SECURE_NO_WARNINGS 1


//计算 n 的阶乘？（不考虑溢出）

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int m = 1;
//	for (i = 1; i <= n; i++)
//	{
//		m = m * i;
//	}
//	printf("%d\n", m);
//	return 0;
//}


//计算 1!+ 2!+ 3!+ …… + 10!

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		int m = 1;
//		for (i = 1; i <= n; i++)
//		{
//			m = m * i;
//		}
//		sum = sum + m;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//在一个有序数组中查找具体的某个数字n。 编写int binsearch(int x, int v[], int n); 功能：在v[0] <= v[1] <= v[2] <= …. <= v[n - 1]的数组中查找x.
#include<stdio.h>
int main()
{
	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = 0;
	scanf("%d", &a);
	int size = sizeof(arr) / sizeof(arr[0]);
	//printf("%d", size);
	int left = 0;
	int right = size - 1;
	int mid = 0;
	while (left <= right)
	{
	    mid = (left + right) / 2;
		if (arr[mid] < a)
			left++;
		if ( arr[mid] > a)
			right--;
		else
		{
			printf("找到了下标是%d\n", mid);
			break;
		}
	}
	
	return 0;
}