#define _CRT_SECURE_NO_WARNINGS 1
//дһ���������ز����������� 1 �ĸ�����

//���磺 15    0000 1111    4 �� 1

//#include<stdio.h>
//
//int Count(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Count(n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//
//int Count(int n)
//{
//	int count = 0;
//	int i = 0;
//	while(n)
//	{
//		n = n & (n - 1);
//		// 00000000000000000000000000001100 ����n
//		// 00000000000000000000000000001011 n-1
//		// 00000000000000000000000000001000 n&(n-1)
//		// 00000000000000000000000000001000 n
//		// 00000000000000000000000000000111 n-1
//		// 00000000000000000000000000000000 n&(n-1)
//		// ��������� ������2��1  û������α��ʽ ������һ��1
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Count(n);
//	printf("%d\n", ret);
//	return 0;
//}

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i)&1);
//	}
//	printf("\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", (n >> i) & 1);
//	}
//	return 0;
//}

#include<stdio.h>
 int number_of_1(int m)
{
	int count = 0;
	while (m)
	{
		m = m & (m - 1);
		count++;
	}
	return count;
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	//��� - ��ͬΪ0������Ϊ1
	int ret = number_of_1(m ^ n);
	printf("%d\n", ret);

	return 0;
}
