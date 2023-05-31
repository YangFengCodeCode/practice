#define _CRT_SECURE_NO_WARNINGS 1

//The size of short is ? bytes.
//The size of int is ? bytes.
//The size of long is ? bytes.
//The size of long long is ? bytes.
//#include<stdio.h>
//int main()
//{
//	printf("The size of short is %d bytes.\n", sizeof(short));
//	printf("The size of int is %d bytes.\n", sizeof(int));
//	printf("The size of long is %d bytes.\n", sizeof(long));
//	printf("The size of long long is %d bytes.\n", sizeof(long long));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 1234;
//	printf("%#o %#x", a, a);
//	return 0;
//}

//1234
//4321
//#include<stdio.h>
//
//void Sort(int* s, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = s[left];
//		s[left] = s[right];
//		s[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[4] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Sort(arr, sz);
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

#include<stdio.h>
void Print(int n)
{
	if (n > 9)
	{
		printf("%d", n % 10);
		Print(n / 10);
	}
	else
		printf("%d", n);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Print(n);
	return 0;
}


#include <stdio.h>
int main()
{
	int n = 0;
	//输入数据
	scanf("%d", &n);
	//获取每一位
	while (n)
	{
		printf("%d", n % 10);
		n /= 10;
	}
	return 0;
}