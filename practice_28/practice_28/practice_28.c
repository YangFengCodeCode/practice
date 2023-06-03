#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//打印上面
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j <n-i-1; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j <2*i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下面
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2*n -3 -2*i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//判断i是否为水仙花数
//		//1. 求判断数字的位数
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. 计算每一位的次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. 判断
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include<math.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断位数
//		int count = 1;
//		int tmp = i;
//		while (tmp/10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//		//计算和
//		int sum = 0;
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		//判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//方法1
//	total = money;
//	empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d", total);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int totol = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		totol += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", totol);
//	return 0;
//}


//#include<stdio.h>
//int main() 
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int l = 0;
//	int r = sz - 1;
//	int i = 0;
//	while (l < r)
//	{
//		//找出偶数
//		while ((l < r) && arr[l] % 2 == 1)
//		{
//			l++;
//		}
//		//找出奇数
//		while ((l < r) && arr[r] % 2 == 0)
//		{
//			r--;
//		}
//
//		if (l < r)
//		{
//			int tmp = arr[l];
//			arr[l] = arr[r];
//			arr[r] = tmp;
//			l++;
//			r--;
//		}
//
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		char arr[20][20] = { 0 };
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				arr[i][j] = ' ';
//			}
//		}
//		int left = 0;
//		int right = n - 1;
//		for (i = 0; i < n; i++)
//		{
//			arr[i][left] = '*';
//			arr[i][right] = '*';
//			left++;
//			right--;
//		}
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				printf("%c", arr[i][j]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i == j || i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//		
//	}
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i + j < n - 1)
//				{
//					printf("  ");
//				}
//				else
//					printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//    unsigned char a = 200;
//    //00000000000000000000000011001000
//    //11001000
//    unsigned char b = 100;
//    //00000000000000000000000001100100
//    //01100100
//    //
//    unsigned char c = 0;
//    c = a + b; // 整型提升的
//    //00000000000000000000000011001000
//    //00000000000000000000000001100100
//    // 
//    //00000000000000000000000100101100
//    // 
//    //00000000000000000000000000101100 - c
//    //
//    printf("%d %d", a + b, c);
//    //300 44
//    return 0;

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e == 120)
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	char killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if (('a' != killer) + ('c' == killer) + ('d' == killer) + ('d' != killer) == 3)
		{
			printf("%c是killer", killer);
		}
	}

	return 0;
}