#define _CRT_SECURE_NO_WARNINGS 


#include<stdio.h>
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ� - дһ��
//	fputs("hello bit\n", pf);
//	fputs("hello xiaobite\n", pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ� - дһ��
//	fputs("hello bit\n", pf);
//	fputs("hello xiaobite\n", pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int main()
{
	FILE* pf = fopen("data.txt", "r");
	if (NULL == pf)
	{
		perror("fopen");
		return 1;
	}
	//���ļ� - ��һ�� ��n-1���ַ�
	char arr[10] = { 0 };
	fgets(arr, 10, pf);//�� fgets() ������������з� '\n' Ҳ����Ҫ��ȡ��һ�� ��ͨ�ַ� ���ѡ� 
    //�ڶ�ȡ���������ʱ�����������Ļس���Ҳ����������棬
	//�����'\n'Ҳ����������� �����������ַ������������ '\0' ��β��
	printf("%s", arr);
	fgets(arr, 10, pf);
	printf("%s", arr);
	fgets(arr, 10, pf);
	printf("%s", arr);
	fgets(arr, 10, pf);
	printf("%s", arr);

	//�ر��ļ�
	fclose(pf);
	pf = NULL;

	return 0;
}
