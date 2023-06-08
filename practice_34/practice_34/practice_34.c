#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	float h = 0;
//	int i = 0;
//	float sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%f", &h);
//		sum += h;
//	}
//	printf("%.2f", sum / 5);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	while (~scanf("%d", &input))
//	{
//		switch (input)
//		{
//		case 200:
//			printf("Ok\n");
//			break;
//		case 202:
//			printf("Accepted\n");
//			break;
//		case 400:
//			printf("Bad Request\n");
//			break;
//		case 403:
//			printf("Forbidden\n");
//			break;
//		case 404:
//			printf("Not Found\n");
//			break;
//		case 500:
//			printf("Internal Server Error\n");
//			break;
//		case 502:
//			printf("Bad Gateway\n");
//			break;
//		defaut:
//			break;
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
//			int a = 1;
//			for (j = 0; j <= i; j++)
//			{
//				printf("%d ", a);
//				a++;
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[7] = { 0 };
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 6; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 6 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	
//	int sum = 0;
//	for (i = 1; i < 6; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%.2f", sum / 5.0);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[7] = { 0 };
//	int i = 0;
//	while (scanf("%d", &arr[i]) != EOF)
//	{
//		for (i = 0; i < 6; i++)
//		{
//			int j = 0;
//			for (j = 0; j < 6 - i; j++)
//			{
//				if (arr[j] < arr[j + 1])
//				{
//					int tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//			}
//		}
//
//		int sum = 0;
//		for (i = 1; i < 6; i++)
//		{
//			sum += arr[i];
//		}
//		printf("%.2f", sum / 5.0);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int sum = 0;
//    int min = 100;//假设最小值是100
//    int max = 0;//假设最大值是0
//    int score = 0;
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d ", &score);//输入
//        sum += score;//求和
//        if (score > max)
//            max = score;//求最大值
//        if (score < min)
//            min = score;//求最小值
//    }
//    printf("%.2f\n", (sum - min - max) / 5.0);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[51];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	for (i = n; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i <= n-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (i = 0; i <= n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n))
//	{
//		int i = 0;
//		int count = 0;
//		for (i = 2; i <= n; i++)
//		{
//			int j = 0;
//			for(j=0; j)
//		}
//		
//	}
//	return 0;
//}


#include<stdio.h> 
int main()
{
    int arr[100] = { 0 };
    int n = 0;
    int i = 0;
    int j = 0;
    int count = 0;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++) //放入1-20
            arr[i] = i + 1;
        for (i = 1; i < n; i++) //判断是不是素数
        {
            for (j = 2; j <= n; j++) //从2开始遍历到n
            {
                if (arr[i] % j == 0 && arr[i] != j) //如果能整除说明不是素数
                {
                    arr[i] = 0;
                    count++;
                    break;
                }
            }
        }
        for (i = 1; i < n; i++)
        {
            if (arr[i] != 0)
                printf("%d ", arr[i]);
        }
        printf("\n%d\n", count);
    }
    return 0;
}