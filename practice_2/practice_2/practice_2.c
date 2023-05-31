//#include<stdio.h>
//int a = 0;
//int main()
//{
//	int b = 10;
//	printf("a = %d\n", a);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	if (a)//a为真 进入
//	{
//		printf("hehe\n");
//	}
//	if (!a)//a 为假输入
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf_s("%d %d %d", &a, &b, &c) )
//	{
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{
	int day = 0;
	scanf_s("%d", &day);
	switch (day)
	{
	case 1:
		printf("day1");
			
	case 2:
		printf("day2");
	}
	return 0;
}
