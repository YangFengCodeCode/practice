#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		tmp = c;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		tmp = c;
//	}
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}



#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 200; i++)
//	{
//		int k = 0;
//		int flag = 1;//����flag = 1 Ϊ����
//		for (k = 2; k < i; k++)
//		{
//			if (i % k == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//
//	printf("count = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		int k = 0;
//		int flag = 1;//����flag = 1 Ϊ����
//		for (k = 2; k < i; k++)
//		{
//			if (i % k == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//
//	printf("count = %d\n", count);
//	return 0;
//}

//#include<math.h>//sqrt ͷ�ļ�
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		int k = 0;
//		int flag = 1;//����flag = 1 Ϊ����
//		for (k = 2; k <= sqrt(i); k++)
//		{
//			if (i % k == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}


// Ҫ��1000�굽2000��֮������ֻ꣬��Ҫ֪���������ķ������ɡ�
//��������������N�ܹ���4���������Ҳ��ܱ�100��������������
//���ߣ�N�ܱ�400������Ҳ������
//����4��һ���Ұ��겻��ÿ400������һ��
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	
//	for (i = 1001; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//        
//		if (i % 400 == 0)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//
//		
//	}
//
//	printf("\n count = %d\n", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int k = (a >= b ? a : b);
//	while (1)
//	{
//		if (a % k == 0 && b % k == 0)
//		{
//			printf("%d\n", k);
//			break;
//		}
//		else
//		{
//			k--;
//		}
//	}
//	return 0;
//}


//շת�����
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int k = 0;
	while (k = a % b)
	{
		a = b;
		b = k;
	}
	printf("%d\n", b);
	return 0;
}