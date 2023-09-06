#define _CRT_SECURE_NO_WARNINGS 



//#include<assert.h>
//#include<stdio.h>
//char* my_strcpy(char* dest, const char* sour)
//{
//	char* ret = dest;// 把dest 的首地址给ret ret来接收首地址 后续dest一直在改变
//	/* 举个例子 我们现在有一个指针arr指向12345，
//	然后B函数要对他进行一番操作之后 返回给A函数使用? 那么在操作过程中 我要把3变成7? 
//	那我就要走到3位置，如果直接把arr+2，，也就是首地址+2 到了3? 位置 改了3变成7，但是A要的数据是12756，
//	我们怎么返回给他呢 那么就需要拿一个指针记录1位置 然? 后在移动arr去操作? 最后操作完只需要返回首地址就可以啦*/
//	assert(dest != NULL);//断言
//	assert(sour != NULL);
//
//	while (*sour != '\0')
//	{
//		*dest = *sour;
//		dest++;
//		sour++;
//	}
//	//while (*dest++ = *src++)
//	// {
//	//?????;
//	// }
//
//
//	*dest = *sour;//? 把 \0 传过去
//	return ret;
//
//}
//
//int main()
//{
//	char arr1[20] = "hello world";
//	char arr2[] = "xxxxx";
//	my_strcpy(arr1 + 6, arr2);
//	printf("%s", arr1);
//	return 0;
//}



//模拟实现strstr
//#include<stdio.h>
//char* my_strstr(char* str1, char* str2)
//{
//	
//	char* s1 = str1;
//	char* s2 = str2;
//
//	if (*str2 == '\0')
//		return str1;
//
//	while (*str1)
//	{
//		//开始匹配
//		s1 = str1;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return str1;
//
//		str1++;
//	}
//
//	return NULL;
//}
//
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//
//	char* ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("找不到\n");
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	char arr[] = "zpengwei@yeah.net@666#777";
//	char copy[30];
//	strcpy(copy, arr);
//
//	char sep[] = "@.#";
//	char* ret = NULL;
//
//	for (ret = strtok(copy, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


// 模拟实现memcpy
//函数拷贝结束后 返回目标空间的起始地址
//#include<assert.h>
//void* my_memcpy(void* dest, const void* sour, size_t num)
//{
//	void* ret = dest;
//	assert(dest && sour);
//	while (num--)
//	{
//		*(char*)dest = *(char*)sour;
//		dest = (char*)dest + 1;// 不能用 (char*)dest++  因为++作用于dest 有可能跳过的不是一个字节
//		sour = (char*)sour + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	// 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 06 00 00 00 .....
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 21);// 21个字节 到06 就结束
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}


//memcpy 只要实现了不重叠拷贝就行 - 60分
//vs 上memcpy 函数实现了重叠拷贝，100分
//
//重叠的内存拷贝还是交给memmove来做
//memmove 当然也可以拷贝不重叠的拷贝

#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//             1 2 1 2 3 4 5 8 9 10
//	memmove(arr1 + 2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//
//	if (dest < src)
//	{
//		//前->后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后->前
//		while (num--)//20
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//             1 2 1 2 3 4 5 8 9 10
//	my_memmove(arr1, arr1 + 2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}



int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 40);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
