#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5 - i - 1; j++)
//		{
//			printf(" ");
//		}
//
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//}


//#include<stdio.h>
//int main()
//{
//	int arr[12] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int dat = 0;
//	scanf("%4d%2d%2d", &year, &month, &dat);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", dat);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int ret = 2<<(n-1);
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	int tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%d", ch);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int sum = (-8 + 22) * a - 10 + (c / 2);
//	printf("%d", sum);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d %d", a / b, a % b);
	return 0;
}