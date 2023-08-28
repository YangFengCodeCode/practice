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
//	//写文件 - 写一行
//	fputs("hello bit\n", pf);
//	fputs("hello xiaobite\n", pf);
//
//	//关闭文件
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
//	//写文件 - 写一行
//	fputs("hello bit\n", pf);
//	fputs("hello xiaobite\n", pf);
//
//	//关闭文件
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
	//读文件 - 读一行 读n-1个字符
	char arr[10] = { 0 };
	fgets(arr, 10, pf);//在 fgets() 函数的眼里，换行符 '\n' 也是它要读取的一个 普通字符 而已。 
    //在读取键盘输入的时候会把最后输入的回车符也存进数组里面，
	//即会把'\n'也存进数组里面 ，而又由于字符串本身会是以 '\0' 结尾的
	printf("%s", arr);
	fgets(arr, 10, pf);
	printf("%s", arr);
	fgets(arr, 10, pf);
	printf("%s", arr);
	fgets(arr, 10, pf);
	printf("%s", arr);

	//关闭文件
	fclose(pf);
	pf = NULL;

	return 0;
}
