#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	float h = 0.0;
//	float w = 0.0;
//	while (scanf("%f %f", &w, &h) != EOF)
//	{
//		float BMI = w / ((h * h) / 10000.0);
//		if (BMI < 18.5)
//			printf("Underweight\n");
//		if (BMI >= 18.5 && BMI <= 23.9)
//			printf("Normal\n");
//		if (BMI > 23.9 && BMI <= 27.9)
//			printf("Overweight\n");
//		if (BMI > 27.9)
//			printf("Obese\n");
//	}
//	
//	
//
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float a = 0.0; 
//	float b = 0.0;
//	float c = 0.0;
//
//
//	while (~scanf("%f %f %f", &a, &b, &c))
//	{
//		float n = b * b - 4 * a * c;
//		if (a == 0)
//		{
//			printf("¡°Not quadratic equation\n");
//		}
//		else
//		{
//			if (n == 0)
//			{
//				printf("x1=x2=%.2f\n",(-b)/ (2 * a));
//			}
//			else
//			{
//				if (n > 0)
//				{
//					printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(n)) / (2 * a), (-b + sqrt(n)) / (2 * a));
//				}
//				else
//				{
//					printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", -b / (2 * a), (sqrt(-n)) / (2 * a), -b / (2 * a), (sqrt(-n)) / (2 * a));
//				}
//			}
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	double a = 0;
//	double b = 0;
//	char ch = 0;
//	while (~scanf("%lf%c%lf", &a, &ch, &b))
//	{
//		switch (ch)
//		{
//		 case '+' :
//			printf("%.4lf+%.4lf=%.4f\n", a, b, a + b);
//			break;
//		 case '-':
//			 printf("%.4lf-%.4lf=%.4f\n", a, b, a - b);
//			 break;
//		 case '*':
//			 printf("%.4lf*%.4lf=%.4f\n", a, b, a*b);
//			 break;
//		 case '/':
//			 if (b == 0.0)
//			 {
//				 printf("Wrong!Division by zero!\n");
//				 break;
//			 }
//			 else
//			 {
//				 printf("%.4lf/%.4lf=%.4f", a, b, a / b);
//				 break;
//			 }
//		 default:
//			 printf("Invalid operation!\n");
//			 break;
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (~scanf("%d", &a))
//	{
//		int i = 0;
//		for (i = 0; i < a; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	char arr[20][20];
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	char arr[20][20];
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	char arr[20][20];
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			//´òÓ¡¿Õ¸ñ
//			for (j = 0; j < n-i-1; j++)
//			{
//				printf("  ");
//			}
//			//´òÓ¡ÐÇºÅ
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	char arr[20][20];
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			//´òÓ¡¿Õ¸ñ
//			int j = 0;
//			for (j = 0; j < n - i - 1; j++)
//			{
//				printf(" ");
//			}
//			//´òÓ¡ÐÇºÅ
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


