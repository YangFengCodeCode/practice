#define _CRT_SECURE_NO_WARNINGS 1


//���� n �Ľ׳ˣ��������������

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int m = 1;
//	for (i = 1; i <= n; i++)
//	{
//		m = m * i;
//	}
//	printf("%d\n", m);
//	return 0;
//}


//���� 1!+ 2!+ 3!+ ���� + 10!

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		int m = 1;
//		for (i = 1; i <= n; i++)
//		{
//			m = m * i;
//		}
//		sum = sum + m;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//��һ�����������в��Ҿ����ĳ������n�� ��дint binsearch(int x, int v[], int n); ���ܣ���v[0] <= v[1] <= v[2] <= ��. <= v[n - 1]�������в���x.
#include<stdio.h>
int main()
{
	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = 0;
	scanf("%d", &a);
	int size = sizeof(arr) / sizeof(arr[0]);
	//printf("%d", size);
	int left = 0;
	int right = size - 1;
	int mid = 0;
	while (left <= right)
	{
	    mid = (left + right) / 2;
		if (arr[mid] < a)
			left++;
		if ( arr[mid] > a)
			right--;
		else
		{
			printf("�ҵ����±���%d\n", mid);
			break;
		}
	}
	
	return 0;
}