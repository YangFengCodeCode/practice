#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int arr[101][101];
//	int i = 0;
//	float count = 0;
//	for (i = 0; i < 2 * m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (arr[i][j] == arr[i + m][j])
//			{
//				count++;
//			}
//		}
//	}
//
//	float a = count / (m * n);
//	printf("%.2f", a*100);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr1[6] = "admin";
//	char arr2[6] = "admin";
//	char arr3[20];
//	char arr4[20];
//	while (~scanf("%s %s", &arr3, &arr4))
//	{
//		int i = 0;
//		int flag = 0;
//		for (i = 0; i < 6; i++)
//		{
//			if (arr1[i] != arr3[i] && arr2[i] != arr4[i])
//			{
//				printf("Login Fail!\n");
//				flag = 1;
//			}
//			
//		}
//		if (flag == 0)
//		{
//			printf("Login Success!\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char name[20] = { 0 };
//    char password[20] = { 0 };
//    while (scanf("%s %s", name, password) != EOF)
//    {
//        if (strcmp(name, "admin") == 0 && strcmp(password, "admin") == 0)
//        {
//            printf("Login Success!\n");
//        }
//        else
//        {
//            printf("Login Fail!\n");
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		int a = i;
//		while (a)
//		{
//			if (a % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			else
//			{
//				a = a / 10;
//			}
//		}
//
//	}
//	printf("%d", count);
//	return 0;
//}


#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int count1 = 0;
	int count2 = 0;
	for (i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			count1++;
		}
		else
			count2++;
	}
	printf("%d %d", count1, count2);
	return 0;
}