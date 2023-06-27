#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int a = (n > m ? m : n);
//	while (a)
//	{
//		if (n % a == 0 && m % a == 0)
//		{
//			break;
//		}
//		else
//			a--;
//	}
//	printf("%d", a);
//	return 0;
//}

#include<stdio.h>

void reverse_string(char *ch)
{
	int len = strlen(ch);
	int left = 0;
	int right = len - 1;
	int tmp = ch[left];
	ch[left] = ch[right];
	ch[right] = '\0';
	if (strlen(ch + 1) > 1)
		reverse_string(ch + 1);
	ch[right] = tmp;
}
int main()
{
	char ch[20];
	scanf("%s", ch);
	reverse_string(ch);
	printf("%s", ch);
	return 0;
}