#define _CRT_SECURE_NO_WARNINGS 1

����Ļ�����9*9�˷��ھ���

#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i * j);// \t sˮƽ�Ʊ�� �൱���ĸ��ո�
			//printf("%d*%d=%2d ", i, j, i * j); ��ӡ��λ ���� ���Ϊ�ո�
			//printf("%d*%d=%-2d ", i, j, i * j); ��ӡ��λ ���� �ұ�Ϊ�ո�
		}
		printf("\n");
	}
	return 0;
}


��10 �����������ֵ

#include<stdio.h>

int Max(int arr[10], int sz)
{
	int Max = arr[0];// ȥ����һ���� �ٶ���Ϊ���ֵ
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

����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

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

��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9

#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if(9 == i % 10)
			count++;
		if (9 == i / 10)// �������д�� else if ��if �������Ļ��Ͳ����������� 99�Ͳ���������
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
    //�Ȳ�������͹�ʽ
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
#include<limits.h>// INY_MIN ͷ�ļ�
int Max(int arr[4], int sz)
{
	int Max = INT_MIN;//�������ֵ�������α�������Сֵ
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
	while ((ch = getchar()) != EOF)// getchar ��ȡ�ַ�
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	    {
			printf("%c is an alphabet.\n", ch);
	    }
	    else 
		{
			 printf("%c is not an alphabet.\n", ch);
	    }
		getchar();// �õ� \n
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)// getchar ��ȡ�ַ�
	{
		if (isalpha(ch))//Ҳ������ isalpha �����ж��ǲ����ַ�
		{
			printf("%c is an alphabet.\n", ch);
		}
		else
		{
			printf("%c is not an alphabet.\n", ch);
		}
		getchar();// �õ� \n
	}
	return 0;
}

#include<stdio.h>
int main()
{
	printf("%lf", 2 / 3.0);
	return 0;
}