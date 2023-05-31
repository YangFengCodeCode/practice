#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		printf("%c\n", ch + 32);
//		getchar();//清理缓冲区
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch + 32);
//		printf("\n");
//		getchar();
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	printf("%15d\n", 0xABCDEF);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= "Z"))
//		{
//			printf("YES\n");
//		}
//		else
//			printf("NO\n");
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
//		if (isalpha(ch))//使用库函数
//		{
//			printf("YES\n");
//		}
//		else
//			printf("NO\n");
//		getchar();
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= "Z"))
//		{
//			printf("YES\n");
//		}
//		else
//			printf("NO\n");
//		getchar();
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	char a = 0;
	char arr[5][5];
	scanf("%c", &a);
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			arr[i][j] = ' ';
		}
	}

	for (i = 0; i < 5; i++)
	{
		
	}
	return 0;
}