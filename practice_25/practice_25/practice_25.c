#define _CRT_SECURE_NO_WARNINGS 1
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
	fgets(arr, 100, stdin);//��ȡһ���ַ�������ʹ�м��пո�
	//scanf("%[^\n]s", arr);
	int len = strlen(arr);
	char* start = arr;
	char* cur = arr;
	*(cur + len-1) = "\0";
	reverse(arr, arr + len - 1);
	//����ÿ������

	while (*cur) {
		while (*cur != ' ' && *cur != '\0')
		{
			cur++;
		}
		reverse(start+1, cur - 1);
		start = cur + 1;
		if (*cur == ' ')
			cur++;
	}
	printf("%s", arr+1);
	return 0;
}
