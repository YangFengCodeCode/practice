#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	long long int a = 0;
//	long long int b = 0;
//	scanf("%lld %lld", &a, &b);
//	int i = 1;
//	while (a*i % b)
//	{
//		i++;
//	}
//	printf("%lld", a*i);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[101];
//	gets(arr);
//	int len = strlen(arr);
//	//����
//	reverse(arr, arr + len - 1);
//	//��������
//	char *start = arr;
//	char *cur = arr;
//	while (*cur)
//	{
//		while (*cur != ' ' && *cur != '\0')
//		{
//			cur++;
//		}
//		reverse(start, cur - 1);
//		start = cur + 1;
//		if (*cur == ' ')
//		{
//			cur++;
//		}
//	}
//	
//	printf("%s\n", arr);
//	return 0;
//}

#include <stdio.h>
#include<string.h>
void reverse(char* left, char* right)
{
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}
int main() {
    char arr[101];
    //gets(arr);
    //fgets(arr, 100, stdin);//��ȡһ���ַ�������ʹ�м��пո�
    scanf("%[^\n]s", arr);
    int len = strlen(arr);
    reverse(arr, arr + len - 1);
    //����ÿ������
    char* start = arr;
    char* cur = arr;

    while (*cur) {
        while (*cur != ' ' && *cur != '\0')
        {
            cur++;
        }
        reverse(start, cur - 1);
        start = cur + 1;
        if (*cur == ' ')
            cur++;
    }
    printf("%s\n", arr);
    return 0;
}