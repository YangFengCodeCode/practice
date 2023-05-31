#define _CRT_SECURE_NO_WARNINGS 1
//递归和非递归分别实现求第n个斐波那契数
//
//例如：
//
//输入：5  输出：5
//
//输入：10， 输出：55
//
//输入：2， 输出：1
// 1 1 2 3 5 8

//#include<stdio.h>
//
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//编写一个函数实现n的k次方，使用递归实现

//#include<stdio.h>
//
//int sq(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else
//		return n * sq(n, (k - 1));
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = sq(n, k);
//	printf("%d\n", ret);
//	return 0;
//}




//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//输入：1729，输出：19
//


//#include<stdio.h>
//
//int sum(int n)
//{
//	int a = 0;
//	// 1729%10 = 9
//	// 172%10 = 2
//	// 17%10 = 7
//	// 1%10 = 1
//	if (n >= 9)
//	{
//		sum(n / 10);
//	}
//	
//	//a = a + n % 10;
//	return a + n % 10;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = sum(n);
//	printf("%d", &ret);
//	return 0;
//}