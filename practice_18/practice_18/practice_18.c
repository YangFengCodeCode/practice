#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Sum(int a)
{
	if (a > 10)
		return Sum(a / 10) + a % 10;
	else
		return a;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int ret = Sum(a);
	printf("%d\n", ret);

	return 0;
}