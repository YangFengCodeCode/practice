#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void test(int a[])
//{
//	a[0] = 3;
//	a[1] = 5;
//}
//
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//	printf("%d %d\n", arr[0], arr[1]);
//	return 0;
//}

//void test(int *px, int *py)
//{
//	*px = 3;
//	*py = 5;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//int x = 0;
//int y = 0;
//
//void test()
//{
//	x = 3;
//	y = 5;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test();
//
//	a = x;
//	b = y;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//
//���� :
//
//char arr[] = "abcdef";
//
//
//����֮����������ݱ�ɣ�fedcba

////�ǵݹ�
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "abcdef";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//	return 0;
//}

// �ݹ�

#include<stdio.h>

//��������Ҳ���Բ���strlen���� �����Լ�����һ��

//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}

void reverse_string(char* s)
{
	int len = strlen(s);
	int left = 0;
	int right = len-1;
	int tmp = s[left];
	s[left] = s[right];
	s[right] = '\0';
	if(strlen(s+1)>1)//���м�ֻҪ1������\0 ��ʱ��Ͳ�Ҫ�ݹ��� ���ݹ������������ ��ֹջ��� 
	reverse_string(s + 1);
	s[right] = tmp;

}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}


