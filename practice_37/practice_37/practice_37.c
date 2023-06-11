#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 9; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 9 - i; j++)
//		{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr1[6] = "admin";
//	char arr2[6] = "admin";
//	char arr3[20];
//	char arr4[20];
//	while (~scanf("%s %s", arr3, arr4))
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


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count1 = 0;
//	int count2 = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &n);
//		if (n > 0)
//		{
//			count1++;
//		}
//		if (n < 0)
//		{
//			count2++;
//		}
//	}
//
//	printf("positive:%d\n", count1);
//	printf("negative:%d\n", count2);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	int m = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		sum += m;
//	}
//
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = 0;
//	int i = 0;
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		if (m > max)
//		{
//			max = m;
//		}
//		if (m < min)
//		{
//			min = m;
//		}
//	}
//
//	printf("%d", max - min);
//	return 0;
//}

//【编程】计算机学院要参加校乒乓球大赛，学院要求计算机科学与技术专业和信息安全专业
//每个专业各有三个人参加，并要求这六个人组成三场比赛（不同专业才能进行比赛），
//已知计科专业选出三人a, b, c，信安专业选出三人x, y, z。
//有其他学院的对手想来打听一下计算机学院的对阵情况，
//只打听到了一下信息：“a说他不和x对打，c说他不和x, z对打。”
//请通过编程方式，找出对阵情况名单。
//
//【要求】输出格式参见样张。
//【特别提示】
//（1）本程序中的循环结构一律使用for语句实现；
//（2）使用已定义的变量，不再另外定义；

//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	int x = 1;
//	int y = 2;
//	int z = 3;
//	for (a = 1; a <= 3; a++)
//	{
//		for (b = 1; b <= 3; b++)
//		{
//			for (c = 1; c <= 3; c++)
//			{
//				if ((a != 1) && (c != 1) && (c != 3))
//				{
//					if(a!=b && b!=c && a!=c)
//					printf("The group is a=%d b=%d c=%d", a, b, c);
//				}
//				printf("\n");
//			}
//		}
//	}
//	
//	return 0;
//}

//#include<stdio.h>//头文件 
//int main()//主函数 
//{
//    char i, j, k;//定义字符变量 
//    for (i = 'x'; i <= 'z'; i++)//i是a的对手；j是b的对手；k是c的对手 
//    {
//        for (j = 'x'; j <= 'z'; j++)
//        {
//            if (i != j)
//            {
//                for (k = 'x'; k <= 'z'; k++)
//                {
//                    
//                        if (i != 'x' && k != 'x' && k != 'z')
//                        {
//                            if((i!=j) && (j != k) && ( i!=k))
//                            printf("The group is a--%c, b--%c, c--%c\n", i, j, k);//输出结果 
//                        }
//                }
//            }
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[51];
//	int count1 = 0;
//	int count2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n-1; i++)
//	{
//		if (arr[i + 1] > arr[i])
//		{
//			count1++;
//		}
//		else
//			count2++;
//	}
//
//	if ((count1 == n-1) || (count2 == n-1))
//	{
//		printf("sorted\n");
//	}
//	else
//		printf("unsorted\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[51];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int m = 0;
//	scanf("%d", &m);
//
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != m)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//
//	return 0;
//}


#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int arr[1001] = { 0 };
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		int j = 0;
		if (i == 0)
		{
			printf("%d ", arr[0]);
		}
		for (j = 0; j < i; j++)
		{
			if (arr[j] != arr[i])
			{
				printf("%d ", arr[i]);
				break;
			}
		}
	}

	return 0;
}