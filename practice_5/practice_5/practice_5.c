//1 计算 n 的阶乘？（不考虑溢出）
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



//2.计算 1!+ 2!+ 3!+ …… + 10!
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

//2.计算 1!+ 2!+ 3!+ …… + 10!
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

//3. 在一个有序数组中查找具体的某个数字n。 编写int binsearch(int x, int v[], int n); 功能：在v[0] <= v[1] <= v[2] <= …. <= v[n - 1]的数组中查找x.

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
//			printf("找到了， 下标是%d", i);
//			break;
//		}
//	}
//	if (i == 10)
//		printf("没有找到\n");
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
//			printf("找到了， 下标是%d\n", mid);
//			break;
//		}
//	}
//	
//	if (flag == 0)
//		printf("没有找到\n");
//	return 0;
//}


//4. 编写代码，演示多个字符从两端移动，向中间汇聚。
//#include<stdio.h>
//#include<string.h>//strlen 头文件
//#include<windows.h>// sleep 头文件
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];//arr2 必须是左值 可以修改的常量
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
////}


//5. 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则 提示登录成，如果三次均输入错误，则退出程序。
#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		printf("请输入密码>:\n");
		scanf("%s", password);
		if (0 == strcmp(password, "123456"))
		{
			printf("登录成功\n");
				break;
		}
		else
		{
			printf("密码错误\n");
		}

	}
	if (i == 4)
		printf("退出程序\n");
	return 0;
}