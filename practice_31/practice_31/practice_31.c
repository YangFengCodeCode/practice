#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//		{
//			printf("Vowel\n");
//			getchar();
//		}
//		else
//
//		{
//			printf("Consonant\n");
//			getchar();
//		}
//		
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    char ch = 0;
//    char arr[] = "AEIOUaeiou";
//    //在%c的前面写一个空格会消化掉前面所有的空白字符，然后读取一个字符
//    while (scanf(" %c", &ch) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < 10; i++)
//        {
//            if (ch == arr[i])
//            {
//                printf("Vowel\n");
//                break;
//            }
//        }
//        if (i == 10)
//            printf("Consonant\n");
//        //getchar();
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char ch = 0;
//    char arr[] = "AEIOUaeiou";
//    while ((ch = getchar()) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < 10; i++)
//        {
//            if (ch == arr[i])
//            {
//                printf("Vowel\n");
//                break;
//            }
//        }
//        if (i == 10)
//            printf("Consonant\n");
//        getchar();//去除每个字符后的\n
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'A' && ch <= 'z') || (ch>= 'a' && ch<= 'z'))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//			printf("%c is not an alphabet.\n", ch);
//		getchar();
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else
//		{
//			printf("%c\n", ch + 32);
//		}
//
//		getchar();
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		if (n > 0)
//		{
//			printf("1\n");
//		}
//		else if (n == 0)
//		{
//			printf("0.5\n");
//		}
//		else
//			printf("0\n");
//		//getchar();
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{
	int a, b, c;
	while (~scanf("%d %d %d", &a, &b, &c))
	{
		if ((a + b > c) && (a + c > b) && (b + c > a))
		{
			if (a == b && b == c)
			{
				printf("Equilateral triangle!\n");
			}
			else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
				printf("Isosceles triangle!\n");
			else
				printf("Ordinary triangle!\n");
		}
		else
			printf("Not a triangle!\n");
	}
	return 0;
}