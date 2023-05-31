#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int my_strlen(const char *s)
//{
//	assert(s != NULL);
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count+1;
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int arr3[30000];//合并数组不能初始化
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	i = 0;
//	int j = 0;
//	int k = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			arr3[k] = arr1[i];
//			i++;
//			k++;
//		}
//
//		else
//		{
//			arr3[k] = arr2[j];
//			j++;
//			k++;
//		}
//	}
//
//	if (i == n)
//	{
//		while (j < m)
//		{
//			arr3[k] = arr2[j];
//			j++;
//			k++;
//		}
//	}
//
//	else
//	{
//		while (i < n)
//		{
//			arr3[k] = arr1[i];
//			i++;
//			k++;
//		}
//	}
//
//	for (i = 0; i < n + m; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}

//int main()
//{
//    int a = 1234;
//    printf("%#o %#X", a, a);
//    return 0;
//}

int main()
{
	char ch = 0;
	while ((ch = getchar()) != EOF)
	{
		printf("%c\n", (ch+32));
		getchar();
	}
	return 0;
}