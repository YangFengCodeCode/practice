#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main()
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	int arr[201] = { 0 };
	int count = 1;
	for (int i = 2; i <= 200; i++)
	{
		int flag = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 1;
			}
		}

		if (flag == 0)
		{
			arr[count] = i;
			if (count == m)
			{
				break;
			}
			count++;
		}
	}

	int sum = 0;
	for (; n <= m; n++)
	{
		sum += arr[n];
	}

	printf("%d\n", sum);
	return 0;
}