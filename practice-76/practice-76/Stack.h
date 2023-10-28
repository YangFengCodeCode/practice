#pragma once
#include<iostream>
using namespace std;
typedef int DataType;
class Stack
{
public:
	//构造函数
	Stack(int capacity = 3);
	//拷贝函数
	Stack(Stack& st);
	//析构函数
	~Stack();

	//插入
	void Push(DataType x);

	//删除
	void Pop();

	//打印
	void Print();
private:
	int* _a;
	int _top;
	int _capacity;
};
