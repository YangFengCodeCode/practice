#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//int main()
//{
//	long long int n;
//	scanf("%lld", &n);
//	printf("%d %d %d", n / 3600, (n % 3600) / 60, (n % 3600) % 60);
//	return 0;
//}

#include<stdio.h>
int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	scanf("%f %f %f", &a, &b, &c);
	printf("%0.2f %0.2f", a + b + c, (a + b + c) / 3);
	return 0;
}