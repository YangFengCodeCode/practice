#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int  weight = 0;
//	int  high = 0;
//	scanf("%d %d", &weight, &high);
//	double a = (double)high * high / 10000;
//	printf("%.2lf", weight / a);
//	return 0;
//}


//#include<stdio.h>
//int ret(int a, int b)
//{
//  double i  = (double)a * a / 4;
//  int j = 1;
//  while (i + j * j != b)
//  {
//
//  }
//
//}
//int main()
//{
//	long int a = 0;
//	long int b = 0;
//	long int c = 0;
//	scanf("%ld %ld %ld", &a, &b, &c);
//	double circumference = (double)a + (double)b + (double)c;
//	double area =(double)a/2
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	float len = a + b + c;
//	float p = (a + b + c) / 2.0;
//	float area = sqrt(p * (p - a) * (p - b)*(p - c));//º£Â×¹«Ê½
//	printf("circumference=%0.2f area=%0.2f", len, area);
//
//	return 0;
//}



//#include<stdio.h>
//
//double srt(double m)
//{
//	double ret = m * m * m;
//	return ret;
//}
//int main()
//{
//	double a = 0;
//	scanf("%lf", &a);
//	double ret = srt(a);
//	double n = 3.1415926;
//	double v = (4.0 / 3) * n * ret;
//	printf("%0.3lf", v);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("score1=%d,score2=%d,score3=%d", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//
//int Is_LilyNumber(int i)//11345
//{
//	int n = 10000;
//	int sum = 0;
//	int j = 0;
//	for (j = 0; j < 4; j++)
//	{
//		sum = (i / n) * (i % n) + sum;
//		n = n / 10;
//	}
//	return sum;
//}
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		int ret = Is_LilyNumber(i);
//		if (ret == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = a + b;
	if (sum < 100)
	{
		printf("%d\n", sum);
	}
	else
	{
		if (sum % 100 > 9)
		{
			printf("%d\n", sum % 100);
		}
		else
			printf("%d\n", sum % 10);
	}


	return 0;
}