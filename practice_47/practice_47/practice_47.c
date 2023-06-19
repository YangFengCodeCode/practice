#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &n);
//		if (n > max)
//		{
//			max = n;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 0; i < 100; i++)
//	{
//		sum += pow(-1, i) * (1.0 / (i + 1));
//	}
//
//	printf("%lf", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    double sum = 0;
//    int flag = 1;
//    for (i = 1; i <= 100; i++)
//    {
//        double a = 1.0 * flag / i;
//        sum += a;
//        flag = -flag;
//    }
//    printf("%lf\n", sum);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if ((i / 10) % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        if (9 == i % 10)
//            count++;
//        if (9 == i / 10)// 如果这里写成 else if 那if 语句成立的话就不会来这里了  99就不会数两次
//            count++;
//    }
//    printf("%d\n", count++);
//    return 0;
//}

//int main()
//{
//    //等差数列求和公式
//    long long n = 0;
//    scanf("%lld", &n);
//    long long sum = 0;
//    sum = (1 + n) * n / 2;
//    printf("%lld\n", sum);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int max = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &n);
//		if (n > max)
//		{
//			max = n;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//		getchar();
//	}
//	return 0;
//}

#include<stdio.h>
#include<string.h>

void reverse_string(char* s)
{
	int len = strlen(s);
	int left = 0;
	int right = len - 1;
	int tmp = s[left];
	s[left] = s[right];
	s[right] = '\0';
	if (strlen(s + 1) > 1)
		reverse_string(s + 1);
	s[right] = tmp;

}
int main()
{
	char arr[100];
	scanf("%s", arr);
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}
