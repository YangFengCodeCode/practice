#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int n;            //思路是定义两个数组
//    int arr1[60] = { 0 }; //①作为输入数组，②作为输出数组
//    int arr2[60] = { 0 };
//    scanf("%d", &n);
//    int g = 0;
//    for (int i = 0; i < n; i++) {
//        int sum = 0;
//        scanf("%d ", &arr1[i]);//输入数组①
//        for (int j = 0; j < i; j++) {
//            if (arr2[j] == arr1[i]) { //检测输出数组②中是否已经存在此数
//                sum = 1;
//                break;
//            }
//        }
//        //sum=0说明if循环未进入则输出数组中无此数
//        //将满足的值输入二数组
//        if (sum == 0) {
//            arr2[g] = arr1[i];
//            g++;
//        }
//    }
//    for (int i = 0; i < g; i++) { //输出②数组
//        printf("%d ", arr2[i]);
//    }
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	float arr[5][5];
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%f", &arr[i][j]);
//		}
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%.1f", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[20][20];
//	int i = 0;
//	for (i = 1; i < n + 1; i++)
//	{
//		int j = 0;
//		for (j = 1; j < m+1; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//
//	printf("%d", arr[x][y]);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int arr[101];
//	for (i = 0; i < n * m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", arr[count]);
//			count++;
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr[101][101];
//	int i = 0;
//	int x = 0;
//	int y = 0;
//	int max = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				x = i;
//				y = j;
//			}
//		}
//	}
//
//	printf("%d %d", x + 1, y + 1);
//
//
//
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int arr[101][101];
	int i = 0;
	int a = 0;
	int flag = 0;
	for (i = 0; i < 2 * n; i++)
	{
		int j = 0;
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
			if (i >= n)
			{
				if (arr[a][j] != arr[i][j])
				{
					flag = 1;
				}

			}
		}
		
		if (i >= n)
		{
			a++;
		}
	}

	if (flag == 1)
	{
		printf("No\n");
	}
	else
		printf("Yes\n");
	return 0;
}