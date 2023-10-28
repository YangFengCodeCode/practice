#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"
//构造函数
Stack::Stack(int capacity)
{
	_a = (int*)malloc(sizeof(int) * capacity);
	if (_a == nullptr)
	{
		perror("malloc fail");
	}
	_top = 0;
	_capacity = capacity;
}

//拷贝函数
Stack::Stack(Stack& st)
{
	_a = (int*)malloc(sizeof(int) * st._capacity);
	if (_a == nullptr)
	{
		perror("malloc fail");
		exit(-1);
	}
	_capacity = st._capacity;
	_top = st._top;
}

//析构函数
Stack::~Stack()
{
	free(_a);
	_a = nullptr;
	_capacity = _top = 0;
}



//插入
void Stack:: Push(DataType x)
{
	if (_top == _capacity)
	{
		_capacity *= 2;
		DataType* tmp = (DataType*)realloc(_a, sizeof(DataType) * _capacity);
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		_a = tmp;
	}
	_a[_top] = x;
	_top++;
}

//删除
void Stack::Pop()
{
	_top--;
}

//打印
void Stack::Print()
{
	for (int i = 0; i < _top; i++)
	{
		printf("%d ", _a[i]);
	}
	printf("\n");
}