#define _CRT_SECURE_NO_WARNINGS


////匿名结构体类型
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], * p;
//
////上面的两个结构在声明的时候省略掉了结构体标签（tag）
//
////在上面的基础上 p = &x 合法吗？
////不合法 编译器会把上面的两个声明当成完全不同的两个类型， 所以是非法的


//struct Node
//{
//	int data;
//	struct Node next;
//};
////可行否？
////如果可以，那sizeof(struct Node)是多少？


////正确的引用方式
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
////我们用typedef 重命名、
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
////那我们用匿名形式
//typedef struct
//{
//	int data;
//	struct Node* next;
//}Node;
//
//
////但是注意这样情况是不行的
//typedef struct
//{
//	int data;
//	Node* next;
//}Node;
////把这个结构命名为Node  但是结构里面的Node 不知道是从哪儿拿的 这就是先有蛋还是先有鸡的问题



//struct Point
//{
//	int x;
//	int y;
//}p1; //声明类型的同时定义变量p1  全局变量
//struct Point p2; //定义结构体变量p2  全局变量
////初始化：定义变量的同时赋初值。
//struct Point p3 = { x, y };
//struct Stu        //类型声明
//{
//	char name[15];//名字
//	int age;      //年龄
//};
//struct Stu s = { "zhangsan", 20 };//初始化
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL }; //结构体嵌套初始化
//struct Node n2 = { 20, {5, 6}, NULL };//结构体嵌套初始化



#include<stdio.h>
struct SN
{
	char c;
	int i;
}sn1 = { 'q', 100 }, sn2 = { .i = 200, .c = 'w' };//全局变量

struct S
{
	double d;
	struct SN sn;
	int arr[10];
};

int main()
{
	struct SN sn3, sn4;//局部变量
	printf("%c %d\n", sn2.c, sn2.i);
	struct S s = { 3.14, {'a', 99}, {1,2,3} };
	printf("%lf %c %d\n", s.d, s.sn.c, s.sn.i);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", s.arr[i]);
	}
	return 0;
}
