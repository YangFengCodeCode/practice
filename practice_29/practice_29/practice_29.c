#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//	while (scanf("%d %d %d", &n, &h, &m) == 3)
//	{
//		int num = m / h;
//		if ((m % h) != 0)
//		{
//			num++;
//		}
//		printf("%d\n", n-num);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%x %o", &a, &b);
//	printf("%d", a + b);
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n -1-i; j++)
//		{
//			if (arr[j] < arr[j + 1])// 2 3 5 1   3 5 2 1  5 3 2 1
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


#include<stdio.h>
int count(char* arr, char ch)
{
	int count1 = 0;
	int count2 = 0;
	while(*arr != '0')
	{
		if (*arr == 'A')
		{
			count1++;
		}
		if(*arr == 'B')
		{
			count2++;
		}
		arr++;
	}
	if (ch == 'A')
	{
		return count1;
	}
	else
		return count2;
}

int main()
{
	char arr[20];
	gets(arr);
	int ret1 = count(arr, 'A');
	int ret2 = count(arr, 'B');
	if (ret1 > ret2)
		printf("A");
	else if (ret2 > ret1)
		printf("B");
	else
		printf("C");
}
//
//#include<stdio.h>
//int main(void)
//{
//    char s;
//    int coutA = 0, coutB = 0;
//    while ((s = getchar()) != '0')//关键是要看输入符号结束的设定
//    {
//        if (s == 'A')
//            coutA++;
//        else
//            coutB++;
//    }
//    if (coutA > coutB)
//        printf("A");
//    else if (coutA < coutB)
//        printf("B");
//    else
//        printf("E");
//    return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//int main()
//{
//	char string[40];
//	scanf("%s", string);
//	char* p = string;
//	int a = 0, b = 0;
//	while (*p != '\0')
//	{
//		if (*p == '0')
//			break;
//		if (*p == 'A')
//			a++;
//		else {
//			b++;
//		}
//		p++;
//	}
//	if (a > b)
//		printf("A");
//	else if (a < b)
//		printf("B");
//	else
//		printf("E");
//	return 0;
//}
