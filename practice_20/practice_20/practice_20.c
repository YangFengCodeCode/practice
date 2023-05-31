#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数返回参数二进制中 1 的个数。

//比如： 15    0000 1111    4 个 1

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
//		// 00000000000000000000000000001100 假设n
//		// 00000000000000000000000000001011 n-1
//		// 00000000000000000000000000001000 n&(n-1)
//		// 00000000000000000000000000001000 n
//		// 00000000000000000000000000000111 n-1
//		// 00000000000000000000000000000000 n&(n-1)
//		// 完成了两次 所以有2个1  没完成依次表达式 就是少一个1
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

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

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
	//异或 - 相同为0，相异为1
	int ret = number_of_1(m ^ n);
	printf("%d\n", ret);

	return 0;
}
