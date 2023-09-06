#define _SECURE_NO_WARNINGS 


//#include<stdio.h>
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
//struct S2
//{
//	int i;//4
//	char c1;//1
//	char c2;//1
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//
//	printf("%d\n", sizeof(struct S1));//?
//	printf("%d\n", sizeof(struct S2));//?
//
//	return 0;
//}


//这样现象说明结构体成员不是按照顺序在内存中连续存放的， 而是有一定的对齐规则的
//结构体对齐规则：
//1. 第一个成员在与结构体变量偏移量为0的地址处。
//2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
//VS中默认的值为8
//gcc 没有默认对齐数 对齐数就是结构体成员的自身大小
//3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
//4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整
//体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。


举例告警：

typedef unsigned char RS_U8;

typedef struct
{
    RS_U8 low_power : 1;    //bit 0 欠功率
    RS_U8 over_power : 1;    //bit 1 过功率
    RS_U8 c : 1;    //bit 2 
    RS_U8 d : 1;    //bit 3 
    RS_U8 e : 1;    //bit 4 
    RS_U8 f : 1;    //bit 5
    RS_U8 g : 1;    //bit 6 
    RS_U8 h : 1;    //bit 7 
}STRUCT_ALARM;

只需占一个节字，就可以完成8个告警数据，从而节省空间。

