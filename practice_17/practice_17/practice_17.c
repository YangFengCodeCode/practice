//97
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//���� :
//char arr[] = "abcdef";
//
//����֮����������ݱ�ɣ�fedcba

//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//	printf("%s", arr);
//	return 0;
//}



#include<string.h>
#include<stdio.h>

int  my_strlen(char *arr)
{
	int i = 0;
	while (*arr != '\0')
	{
		i++;
		arr++;
	}
	return i;
}
void reverse_string(char* arr)
{
	int len = my_strlen(arr);
	char tmp = arr[0];
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';

	if (my_strlen(arr + 1) > 1)
	reverse_string(arr+1);

	arr[len - 1] = tmp;
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}