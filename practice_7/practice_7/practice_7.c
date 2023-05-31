#define _CRT_SECURE_NO_WARNINGS 1



//1. 写一个函数可以判断一个数是不是素数。
//#include<stdio.h>
// int sushu(int a)
//{
//	 int i = 0;
//	 for (i = 2; i < a; i++)
//	 {
//		 if ((a % i) == 0)
//		 {
//			 return 0;
//			 break;
//		 }
//		 
//	 }
//	 if (i == a)
//		 return 1; 
//}
//
//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//	int ret = sushu(a);
//	if(sushu(a) == 1)
//	    printf("%d是素数\n", a);
//	if (sushu(a) == 0)
//		printf("%d不是素数\n", a);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int sushu(int a)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(a); i++)
//	{
//		if ((a % i) == 0)
//		{
//			return 0;
//			break;
//		}
//
//	}
//	if (i > sqrt(a))
//		return 1;
//}
//
//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//	int ret = sushu(a);
//	if (sushu(a) == 1)
//		printf("%d是素数\n", a);
//	if (sushu(a) == 0)
//		printf("%d不是素数\n", a);
//	return 0;
//}







//2. 写一个函数判断一年是不是闰年。


//#include<stdio.h>
//
//int run(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0)
//		return 1;
//	if (x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	long int n = 0;
//	scanf("%ld", &n);
//	int ret = run(n);
//	if (1 == run(n))
//		printf("%d是闰年\n", n);
//	if (0 == run(n))
//		printf("%d不是闰年\n", n);
//
//}






//3. 写一个函数，实现一个整形有序数组的二分查找。


//#include<stdio.h>
//
//int  erfen( int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	return -1;//数组没有小于0 的下标
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	scanf("%d", &k);
//	int ret = erfen(arr, k, sz);
//	if (erfen(arr, k, sz) == -1)
//		printf("没有找到\n");
//	else
//		printf("找到了 下标是%d\n", ret);
//	/*if (erfen(arr, k, sz) == mid)
//		printf("找到了下标是 % d\n", mid);//不能这样写 因为mid在第一个函数中的声明不能传到第二个函数里 两个内存空间不同 并没有传给它地址
//	if (erfen(arr, k, sz) == -1)
//		printf("没有找到\n");*/
//
//	return 0;
//}






//4. 写一个函数，每调用一次这个函数，就会将num的值增加1。

#include<stdio.h>
int add(int x)
{
	int z = x + 1;
	return z;
}


int main()
{
	int a = 0;
	scanf("%d", &a);
	int ret = add(a);
	printf("%d\n", ret);
	return 0;
}
