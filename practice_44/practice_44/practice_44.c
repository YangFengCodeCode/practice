#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[100000];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		int j = 0;
//		for (j = 0; j < i; j++)
//		{
//			if (arr[j] == arr[i])
//			{
//				arr[i] = 0;
//			}
//		}
//	}
//
//	for (i = 0; i < n-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[100000] = { 0 };
//	int m = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		arr[m] = m;
//	}
//
//	for (i = 0; i < 100000; i++)
//	{
//		if(arr[i] != 0)
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr[8001] = { 0 };
//	scanf("%s", arr);
//	char* s = arr;
//	int count = 0;
//	while (*s)
//	{
//		if (*s == 'C')
//		{
//			s++;
//			if (*s == 'H')
//			{
//				s++;
//				if (*s == 'N')
//				{
//					count++;
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    char str[8000] = { 0 };
//    int count = 0;
//    scanf("%s", str);
//    char* p = str;
//    long long c = 0;
//    long long ch = 0;
//    long long chn = 0;
//    while (*p)
//    {
//        if (*p == 'C')
//            c++;
//        else if (*p == 'H')
//            ch += c;
//        else if (*p == 'N')
//            chn += ch;
//
//        p++;
//    }
//    printf("%lld\n", chn);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &n);
//		if (n > max)
//		{
//			max = n;
//		}
//	}
//
//	printf("%d", max);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n >= 90 && n <= 100)
//	{
//		printf("A");
//	}
//	if (n >= 80 && n <= 89)
//	{
//		printf("B");
//	}
//	if (n >= 70 && n <= 79)
//	{
//		printf("C");
//	}
//	if (n >= 60 && n <= 69)
//	{
//		printf("D");
//	}
//	if (n>=0 && n <= 59)
//	{
//		printf("E");
//	}
//	if (n < 0 || n>100)
//	{
//		printf("F");
//	}
//	return 0;
//}

#include<stdio.h>
int max(int a, int b, int c)
{
	if (a > b && a > c)
	{
		return a;
	}
	else if (b > c && b > a)
	{
		return b;
	}
	else
		return c;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	float ret1 = max(a + b, b, c);
	float ret2 = max(a, b + c, c);
	float ret3 = max(a, b, b + c);
	printf("%.2f", ret1 / (ret2 + ret3));
	return 0;
}

int max3(int a, int b, int c)
{
	int max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	return max;
}