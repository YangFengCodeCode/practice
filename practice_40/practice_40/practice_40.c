#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[101][101];
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (j < i)
//			{
//				if (arr[i][j] != 0)
//				{
//					flag = 1;
//				}
//			}
//		}
//	}
//
//	if (flag == 1)
//	{
//		printf("NO\n");
//	}
//	else
//		printf("YES\n");
//
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int arr[101][101];
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
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
//			printf("%d ", arr[j][i]);
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
//	int i = 0;
//	int arr[101][101];
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int k = 0;
//	scanf("%d", &k);
//	char ch = 0;
//	int a = 0;
//	int b = 0;
//	int j = 0;
//	for (j = 0; j < k; j++)
//	{
//		scanf(" %c %d %d", &ch, &a, &b);// %c 前面要有空格
//		if (ch == 'r')
//		{
//			for (i = 0; i < m; i++)
//			{
//				int tmp = arr[a-1][i];
//				arr[a - 1][i] = arr[b - 1][i];
//				arr[b - 1][i] = tmp;
//			}
//		}
//		else if (ch == 'c')
//		{
//			for (i = 0; i < n; i++)
//			{
//				int tmp = arr[i][a-1];
//				arr[i][a-1] = arr[i][b-1];
//				arr[i][b-1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char a = 0;
//	scanf("%c", &a);
//	printf("%c", a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[31][31];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (i == 0 || j==0 || j == i)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr[3][3];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		int count1 = 0;
//		int count2 = 0;
//		for (j = 0; j < 2; j++)
//		{
//			if (arr[i][j] == arr[i][j + 1])
//			{
//				if (arr[i][j] == 'K')
//				{
//					count1++;
//				}
//				if (arr[i][j] == 'B')
//				{
//					count2++;
//				}
//			}
//		}
//	}
//
//	
//	int j = 0;
//	for (j = 0; j < 3; j++)
//	{
//		j = 0;
//		int count3 = 0;
//		int count4 = 0;
//		for (i = 0; i < 2; i++)
//		{
//			if (arr[i][j] == arr[i+1][j])
//			{
//				if (arr[i][j] == 'K')
//				{
//					count3++;
//				}
//				if (arr[i][j] == 'B')
//				{
//					count4++;
//				}
//			}
//		}
//
//		if (count3 == 3)
//		{
//			printf("KiKi wins!\n");
//		}
//		if (count3 == 3)
//		{
//			printf("BoBo wins!\n");
//		}
//	}
//
//	int flag = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] == 'K')
//			{
//				flag == 1;
//			}
//			if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] == 'B')
//			{
//				flag == 0;
//			}
//		}
//	}
//
//
//	return 0;
//}

#include <stdio.h>
int main()
{
    char board[3][3] = { 0 };
    char flag = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf(" %c", &board[i][j]);
        }
    }
    //判断输赢
    for (int i = 0; i < 3; i++)
    {
        //行
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != 'O')
        {
            flag = board[i][2];
            break;
        }
        //列
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != 'O')
        {
            flag = board[2][i];
            break;
        }
    }
    //对角线
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != 'O')
    {
        flag = board[2][2];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != 'O')
    {
        flag = board[2][0];
    }

    if ('K' == flag)
    {
        printf("KiKi wins!\n");
    }
    else if ('B' == flag)
    {
        printf("BoBo wins!\n");
    }
    else
    {
        printf("No winner!\n");
    }

    return 0;
}