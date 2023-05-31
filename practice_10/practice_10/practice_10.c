#define _CRT_SECURE_NO_WARNINGS 1

// 2 3 1
// 3 2 1

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		b = a;
//		tmp = b;
//	}
//	if (a <c)
//	{
//		int tmp = a;
//		c = a;
//		tmp = c;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		c = b;
//		tmp = c;
//	}
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}



#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", a, b, c);

	return 0;
}