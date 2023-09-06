#define _SECURE_NO_WARNINGS 

//#include<stdio.h>
////联合类型说明
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un un;//联合变量的定义
//	printf("%d\n", sizeof(un));//计算联合大小
//}



//#include<stdio.h>
//
//int check_sys()
//{
//	union//匿名
//	{
//		int i;
//		char c;
//	}un = { .i = 1 };//初始化
//	return un.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//
//
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}
