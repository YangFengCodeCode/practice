#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	long long int n = 0;
//	long long int m = 0;
//	scanf("%d %d", &n, &m);
//	long long int a = n;
//	int tmp = 0;
//	long int b = m;
//	while (tmp = a % b)
//	{
//		a = b;
//		b = tmp;
//	}
//	printf("%lld", b + m * n / b);
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	while (n)
//	{
//		int w = n % 10;
//		if (w % 2 == 0)
//		{
//			w = 0;
//		}
//		else
//		{
//			w = 1;
//		}
//
//		int ret = w * pow(10, i);
//		sum += ret;
//		n /= 10;
//		i++;
//
//	}
//
//	printf("%d", sum);
//	return 0;
//}
//


#include<stdio.h>

int fib(int n)
{
	if (n <= 2)
	{
		return n;
	}
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}