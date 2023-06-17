#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[101];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int m = 0;
//	scanf("%d", &m);
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == m)
//		{
//			count++;
//		}
//	}
//
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    //难点：要让转义字符不是转义字符
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;");
//
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				count++;
//				break;
//				
//			}
//		}
//	}
//	printf("%d", 900-count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int i = 0, count = 0, j;
//    for (i = 100; i <= 999; i++) {
//        for (j = 2; j < i; j++) {
//            if (i % j == 0) {
//                count++;
//                break;
//            }
//        }
//    }
//    printf("%d\n", 900 - count);
//    return 0;
//}

#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[1001] = { 0 };
	int i = 0;
	int tmp = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &tmp);
		arr[tmp] = tmp;

	}

	for (i = 0; i < 1001; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}