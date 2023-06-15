#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[40] = { 0 };
//    int i = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        arr[i++] = n % 6;
//        n /= 6;
//    }
//    for (i--; i >= 0; i--)
//    {
//        printf("%d", arr[i]);
//    }
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int h = 0;
//	int m = 0;
//	int k = 0;
//	scanf("%d:%d %d", &h, &m, &k);
//	if (k < 24)
//	{
//		if ((k % 60 + m) < 60)
//		{
//			printf("%02d:%d", (k / 60) + h, (k % 60) + m);
//		}
//
//		else
//		{
//			printf("%02d:%d", (k / 60) + h + 1, (k % 60) + m - 60);
//		}
//	}
//	else
//	{
//		k = k % 1440;
//		if ((k % 60 + m) < 60)
//		{
//			printf("%02d:%d", (k / 60) + h, (k % 60) + m);
//		}
//
//		else
//		{
//			printf("%02d:%d", (k / 60) + h + 1, (k % 60) + m - 60);
//		}
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
    int h = 0;
    int m = 0;
    int k = 0;
    scanf("%d:%d %d", &h, &m, &k);
    h = ((m + k) / 60 + h) % 24;
    m = (m + k) % 60;
    printf("%02d:%02d\n", h, m);
    return 0;
}