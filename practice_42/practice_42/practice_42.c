#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", n / 12 * 4 + 2);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//
//	int a = 1;
//	int b = n;
//	while (1)
//	{
//		b = b * a;
//		if (b % n == 0 && b % m == 0)
//		{
//			break;
//		}
//		else
//		{
//			a++;
//		}
//	}
//
//	a = 1;
//	int ret = 0;
//	while (a<=n && a<=m)
//	{
//		if (n % a == 0 && m % a == 0)
//		{
//			ret = a;
//		}
//		else
//			a++;
//	}
//	printf("%d", b+a);
//	return 0;
//}


#include<stdio.h>
int main()
{
	long long int n = 0;
	long long int m = 0;
	scanf("%lld %lld", &n, &m);
	long long int max = m > n ? n : m;
	while (max)
	{
		if (n % max == 0 && m % max == 0)
		{
			break;
		}
		max--;
	}

	long long int min = m > n ? m : n;
	long long int a = 1;
	long long int b = 0;
	while (min)
	{
		b = min * a;
		if (b % n == 0 && b % m == 0)
		{
			break;
		}
		a++;
	}

	printf("%lld", max + b);
	return 0;
}