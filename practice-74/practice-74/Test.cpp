#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"

void TestDate1()
{
	Date d1(2023, 10, 24);
	d1.Print();

	Date ret1 = d1 - 100;
	ret1.Print();

	Date ret2 = d1 - 10000;
	ret2.Print();

	Date ret3 = d1 + 100;
	ret3.Print();

	Date ret4 = d1 + 10000;
	ret4.Print();
}

void TestDate2()
{
	Date d1(2023, 10, 24);
	d1.Print();

	// 语法设计，无法逻辑闭环，那么这时就只能特殊处理
	// 特殊处理
	++d1;
	d1.operator++();
	d1.Print();

	d1++;
	d1.operator++(10);
	d1.operator++(1);
	d1.Print();
}

void TestDate3()
{
	Date d1(2023, 10, 24);
	d1.Print();

	Date d2(2024, 5, 5);
	d2.Print();

	Date d3(2024, 8, 1);
	d3.Print();

	cout << d2 - d1 << endl;
	cout << d1 - d3 << endl;

}

void TestDate4()
{
	Date d1(2023, 10, 24);
	d1 += -100;

	d1.Print();
}

//int main()
//{
//	TestDate1();
//	TestDate2();
//	TestDate3();
//	TestDate4();
//
//	return 0;
//}

// 这里会发现下面的程序会崩溃 这里就需要我们以后讲的深拷贝去解决。
typedef int DataType;
class Stack
{
public:
	Stack(size_t capacity = 10)
	{
		_array = (DataType*)malloc(capacity * sizeof(DataType));
		if (nullptr == _array)
		{
			perror("malloc申请空间失败");
			return;
		}
		_size = 0;
		_capacity = capacity;
	}
	void Push(const DataType& data)
	{
		// CheckCapacity();
		_array[_size] = data;
		_size++;
	}

	void Pop()
	{
		_size--;
	}

	DataType Top()
	{
		return _array[_size - 1];
	}

	bool Empty()
	{
		return _size == 0;
	}


	Stack& operator=(Stack& st)
	{
		_array = (int*)malloc(sizeof(int) * st._capacity);
		if (_array == nullptr)
		{
			perror("malloc fail");
			exit(-1);
		}
		memcpy(_array, st._array, sizeof(int) * st._size);
		_size = st._size;
		_capacity = st._capacity;
	}


	~Stack()
	{
		if (_array)
		{
			free(_array);
			_array = nullptr;
			_capacity = 0;
			_size = 0;
		}
	}
private:
	DataType* _array;
	size_t _size;
	size_t _capacity;
};
int main()
{
	Stack s1;
	s1.Push(1);
	s1.Push(2);
	s1.Push(3);
	s1.Push(4);
	while (!s1.Empty())
	{
		printf("%d ", s1.Top());
		s1.Pop();
	}
	printf("\n");

	Stack s2;
	s2 = s1;
	s2.Push(5);
	s2.Push(6);
	s2.Push(7);
	s2.Push(8);
	while (!s2.Empty())
	{
		printf("%d ", s2.Top());
		s2.Pop();
	}
	return 0;
}