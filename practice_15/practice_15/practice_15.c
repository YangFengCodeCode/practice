#define _CRT_SECURE_NO_WARNINGS 1

在屏幕上输出9*9乘法口诀表

#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i * j);// \t s水平制表符 相当于四个空格
			//printf("%d*%d=%2d ", i, j, i * j); 打印两位 不足 左边为空格
			//printf("%d*%d=%-2d ", i, j, i * j); 打印两位 不足 右边为空格
		}
		printf("\n");
	}
	return 0;
}


求10 个整数中最大值

#include<stdio.h>

int Max(int arr[10], int sz)
{
	int Max = arr[0];// 去其中一个数 假定它为最大值
	int i = 0;
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > Max)
			Max = arr[i];
	}
	return Max;
}
int main()
{
	int arr[10];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}

	int ret = Max(arr,sz);
	printf("%d\n", ret);
	return 0;
}

计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		double a = 1.0*flag / i;
		sum += a;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}

编写程序数一下 1到 100 的所有整数中出现多少个数字9

#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if(9 == i % 10)
			count++;
		if (9 == i / 10)// 如果这里写成 else if 那if 语句成立的话就不会来这里了 99就不会数两次
			count++;
	}
	printf("%d\n", count++);
	return 0;
}

#include <stdio.h>

 int main()
 {
     int n = 0;
     scanf("%d", &n);
     long long sum = 0;
     int i = 0;
     for (i = 1; i <= n; i++)
     {
         sum += i;
     }
     printf("%lld\n", sum);

     return 0;
 }

int main()
{
    //等差数列求和公式
    long long n = 0;
    scanf("%lld", &n);
    long long sum = 0;
    sum = (1 + n) * n / 2;
    printf("%lld\n", sum);

    return 0;
}



#include<stdio.h>

int Max(int arr[4], int sz)
{
	int Max = arr[0];
	int i = 0;
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > Max)
		{
			Max = arr[i];
		}
	}
	return Max;
}
int main()
{
	int arr[4];
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}

	int ret = Max(arr, sz);
	printf("%d\n", ret);
	return 0;
}


#include<stdio.h>
#include<limits.h>// INY_MIN 头文件
int Max(int arr[4], int sz)
{
	int Max = INT_MIN;//假设最大值就是整形变量的最小值
	int i = 0;
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > Max)
		{
			Max = arr[i];
		}
	}
	return Max;
}
int main()
{
	int arr[4];
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}

	int ret = Max(arr, sz);
	printf("%d\n", ret);
	return 0;
}

#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)// getchar 获取字符
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	    {
			printf("%c is an alphabet.\n", ch);
	    }
	    else 
		{
			 printf("%c is not an alphabet.\n", ch);
	    }
		getchar();// 拿掉 \n
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)// getchar 获取字符
	{
		if (isalpha(ch))//也可以用 isalpha 函数判断是不是字符
		{
			printf("%c is an alphabet.\n", ch);
		}
		else
		{
			printf("%c is not an alphabet.\n", ch);
		}
		getchar();// 拿掉 \n
	}
	return 0;
}

#include<stdio.h>
int main()
{
	printf("%lf", 2 / 3.0);
	return 0;
}