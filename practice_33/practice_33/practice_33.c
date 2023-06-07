#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n - i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < n-i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i <n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i+1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		int a = 2 * n;
//		for (i = 0; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < a; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			a -= 2;
//			printf("\n");
//		}
//
//		int b = 2;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < b; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < n - i; j++)
//			{
//				printf("*");
//			}
//			b += 2;
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//				printf(" ");
//				printf("*\n");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n - i; j++)
//			{
//				printf(" ");
//			}
//			printf("*\n");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 1;
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= n; j++)
//			{
//				if (i == j || (i + j) == (n+1))
//				{
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			if (i == 1 || i == n)
//			{
//				for (j = 0; j < n; j++)
//				{
//					printf("* ");
//				}
//			}
//			else
//			{
//				for (j = 1; j <= n; j++)
//				{
//					if (j == 1 || j == n)
//					{
//						printf("* ");
//					}
//					else
//						printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j <= i; j++)
			{
				if (i == 0 || i == 1 || i == (n - 1))
				{
					printf("* ");
				}
				else if (j == 0 || j == i)
				{
					printf("* ");
				}
				else
					printf("  ");

			}
			printf("\n");
		}
	}
	return 0;
}