//1 ���� n �Ľ׳ˣ��������������
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int k = 1;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		k = i * k;
//	}
//	printf("%d", k);
//	return 0;
//}



//2.���� 1!+ 2!+ 3!+ ���� + 10!
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 10;
//	int k = 1;
//
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		k = i * k;
//		sum = sum + k;
//	}
//	printf("%d", sum);
//	return 0;
//}

//2.���� 1!+ 2!+ 3!+ ���� + 10!
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 10;
//	int sum = 0;
//	int k = 0;
//	
//	for (i = 1; i <= n; i++)
//	{
//		int a = 1; 
//		for (k = 1; k <= i; k++)
//		{
//			a = a * k;
//		}
//		sum = sum + a;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//3. ��һ�����������в��Ҿ����ĳ������n�� ��дint binsearch(int x, int v[], int n); ���ܣ���v[0] <= v[1] <= v[2] <= ��. <= v[n - 1]�������в���x.

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ� �±���%d", i);
//			break;
//		}
//	}
//	if (i == 10)
//		printf("û���ҵ�\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 9;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	//printf("%d", n);
//	int i = 0;
//	int left = 0;
//	int right = n - 1;
//	
//	int flag = 0;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			flag = 1;
//			printf("�ҵ��ˣ� �±���%d\n", mid);
//			break;
//		}
//	}
//	
//	if (flag == 0)
//		printf("û���ҵ�\n");
//	return 0;
//}


//4. ��д���룬��ʾ����ַ��������ƶ������м��ۡ�
//#include<stdio.h>
//#include<string.h>//strlen ͷ�ļ�
//#include<windows.h>// sleep ͷ�ļ�
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];//arr2 ��������ֵ �����޸ĵĳ���
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
////}


//5. ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ�� ��ʾ��¼�ɣ�������ξ�����������˳�����
#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		printf("����������>:\n");
		scanf("%s", password);
		if (0 == strcmp(password, "123456"))
		{
			printf("��¼�ɹ�\n");
				break;
		}
		else
		{
			printf("�������\n");
		}

	}
	if (i == 4)
		printf("�˳�����\n");
	return 0;
}