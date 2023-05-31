#define _CRT_SECURE_NO_WARNINGS 

//#include<stdio.h>
//
//int sum(int n)
//{
//	if (n < 1)
//		return 0;
//	else
//		return n % 10 + sum(n / 10);
//}
//int main()
//{
//    int n = 0;
//	scanf("%d", &n);
//	int ret = sum(n);
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
//
//int reserve_string(char *s)
//{
//	
//	if (*s != '\0')
//	{
//		return reserve_string(s - 1);
//		printf("%c ", *s);
//	}
//	else
//		return 0;
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//    int ret = reverse_string(arr);
//	
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char ch[20] = { 0 };
//	scanf("%s", ch);
//	int ret = strlen(ch);
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>
//
//int my_strlen(char* ch)
//{
//	/*if (*ch != '\0')
//		return 1 + my_strlen(ch + 1);
//	else
//		return 0;*/
//	if (*ch == 0)
//		return 0;
//	else
//		return 1 + my_strlen(ch + 1);
//}
//int main()
//{
//	char ch[20] = { 0 };
//	scanf("%s", &ch);
//	int ret = my_strlen(ch);
//	printf("%d\n", ret);
//	return 0;
//}
//
//


//#include<stdio.h>
//
//int fib(int n)
//{
//	int a = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		a = a * i;
//	}
//	return a;
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
//	if (n > 1)
//		return n * fib(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

#include<stdio.h>

void print(int n)
{
	if (n >= 9)
	{
		print(n / 10);
		printf("%d ", n % 10);
	}
	else
		printf("%d ", n);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}