#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////·½·¨1
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        if (n >= 140)
//            printf("Genius");
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int score = 0;
//    while (scanf("%d", &score) != EOF)
//    {
//        if (score >= 90 && score <= 100)
//            printf("Perfect");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int score = 0;
//    while (scanf("%d", &score) != EOF)
//    {
//        if (score >= 60)
//            printf("Pass\n");
//        else
//            printf("Fail\n");
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n % 2 == 0)
//		{
//			printf("Even\n");
//		}
//		else
//			printf("Odd\n");
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		if (a > c && a > b)
		{
			printf("%d\n", a);
		}
		else
		{
			if (b > c)
				printf("%d\n", b);
			else
				printf("%d\n", c);
		}
	}
	return 0;
}