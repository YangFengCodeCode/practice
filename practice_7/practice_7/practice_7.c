#define _CRT_SECURE_NO_WARNINGS 1



//1. дһ�����������ж�һ�����ǲ���������
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
//	    printf("%d������\n", a);
//	if (sushu(a) == 0)
//		printf("%d��������\n", a);
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
//		printf("%d������\n", a);
//	if (sushu(a) == 0)
//		printf("%d��������\n", a);
//	return 0;
//}







//2. дһ�������ж�һ���ǲ������ꡣ


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
//		printf("%d������\n", n);
//	if (0 == run(n))
//		printf("%d��������\n", n);
//
//}






//3. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�


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
//	return -1;//����û��С��0 ���±�
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	scanf("%d", &k);
//	int ret = erfen(arr, k, sz);
//	if (erfen(arr, k, sz) == -1)
//		printf("û���ҵ�\n");
//	else
//		printf("�ҵ��� �±���%d\n", ret);
//	/*if (erfen(arr, k, sz) == mid)
//		printf("�ҵ����±��� % d\n", mid);//��������д ��Ϊmid�ڵ�һ�������е��������ܴ����ڶ��������� �����ڴ�ռ䲻ͬ ��û�д�������ַ
//	if (erfen(arr, k, sz) == -1)
//		printf("û���ҵ�\n");*/
//
//	return 0;
//}






//4. дһ��������ÿ����һ������������ͻὫnum��ֵ����1��

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
