#define _CRT_SECURE_NO_WARNINGS 


#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//
//
//	//初始化为1~10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//
//
//	//增加一些空间
//	int* ptr = (int*)realloc(p, 80);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//
//
//	//打印数据
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//
//
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}



//#include<stdio.h>
//struct S
//{
//	int n;
//	int arr[0];//柔性数组
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S));
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
//	if (ps == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i + 1;
//	}
//
//	//空间不够，需要增容
//	struct S* ptr = realloc(ps, sizeof(struct S) + 60);
//	if (ptr == NULL)
//	{
//		perror("realloc");
//		return 1;
//	}
//	ps = ptr;
//	ps->n = 15;
//	for (i = 0; i < 15; i++)
//	{
//		printf("%d\n", ps->arr[i]);
//	}
//
//	//释放
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}



//上述代码也可调整
struct S
{
	int n;
	int* arr;
};


int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
	{
		perror("malloc->ps");
		return 1;
	}

	ps->n = 100;
	ps->arr = (int*)malloc(40);//1 2 3 4 5 6 7 8 9 10
	if (ps->arr == NULL)
	{
		perror("malloc->arr");
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i + 1;
	}

	//调整
	int* ptr = (int*)realloc(ps->arr, 60);
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	else
	{
		perror("realloc");
		return 1;
	}

	//打印
	for (i = 0; i < 15; i++)
	{
		printf("%d\n", ps->arr[i]);
	}

	//释放
	free(ps->arr);
	ps->arr = NULL;

	free(ps);
	ps = NULL;

	return 0;
}
