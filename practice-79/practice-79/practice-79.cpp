#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//// 1.下面程序编译运行结果是？ A、编译报错 B、运行崩溃 C、正常运行
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;// this->_a  这个this 就是nullptr
//	}
//private:
//	int _a = 1;
//};
//int main()
//{
//	A p;
//	p.PrintA();
//	return 0;
//}
//// B 运行崩溃(可能版本不同的vs 有差别)



//class Date
//{
//public:
//    // 1.无参构造函数(构成函数重载)-->存在一定歧义
//    Date()
//    {
//        _year = 1;
//        _month = 1;
//        _day = 1;
//    }
//
//    // 2.带参构造函数
//    Date(int year, int month, int day)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//int main()
//{
//    Date d1; // 调用无参构造函数
//    Date d2(2015, 1, 1); // 调用带参的构造函数
//
//    // 注意：如果通过无参构造函数创建对象时，对象后面不用跟括号，否则就成了函数声明
//    // warning C4930: “Date d3(void)”: 未调用原型函数(是否是有意用变量定义的?)
//    // Date d3();
//    return 0;
//}


//class Date
//{
//public:
//    
//    // 如果用户显式定义了构造函数，编译器将不再生成
//   /* Date(int year, int month, int day)
//    {
//    _year = year;
//    _month = month;
//    _day = day;
//    }*/
//    
//
//    void Print()
//    {
//        cout << _year << "-" << _month << "-" << _day << endl;
//    }
//
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//int main()
//{
//    // 将Date类中构造函数屏蔽后，代码可以通过编译，因为编译器生成了一个无参的默认构造函数
//    // 将Date类中构造函数放开，代码编译失败，因为一旦显式定义任何构造函数，编译器将不再生成
//    Date d1;//需要无参构造函数
//    return 0;
//}

//class Date
//{
//public:
//    Date(int year, int month, int day)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};


//class Date
//{
//public:
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	//Date(int year, int month, int day)
//	//	:_year(year)
//	//	, _month(month)
//	//	, _day(day)
//	//{
//	//	// 初始化列表
//	//}
//
//	void Print()
//	{
//		cout << _year << '/' << _month << '/' << _day << endl;
//	}
//
//private:
//	// 声明
//	int _year; 
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2022, 2, 1);
//	d1.Print();
//	d1(2023, 4, 1);
//	d1.Print();
//
//	return 0;
//}
//
////
//
//
//class Date
//{
//public:
//	Date(int year, int month, int day)
//	{
//		// 函数体内初始化
//		_year = year;
//		_month = month;
//		_day = day;
//		int& _ref;//引用 -->error
//		const int _n;//const -->error
//	}
//
//	void Print()
//	{
//		cout << _year << '/' << _month << '/' << _day << endl;
//	}
//
//private:
//	// 声明
//	int _year = 1; // 缺省值
//	int _month = 1;    
//	int _day;
//	int& _ref;//引用
//	const int _n;//const
//};

//class Date
//{
//public:
//	//Date(int year, int month, int day)
	//{
	//    // 函数体内初始化
	//    _year = year;
	//    _month = month;
	//    _day = day;
	//     int& _ref;//引用 -->error
	//     const int _n;//const -->error
	//}

//	Date(int year, int month, int day)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//		, _ref(year)
//		, _n(1)
//	{
//		// 初始化列表
//	}
//
//	void Print()
//	{
//		cout << _year << '/' << _month << '/' << _day << endl;
//	}
//
//private:
//	// 声明
//	int _year = 1; // 缺省值
//	int _month = 1;
//	int _day;
//	int& _ref;//引用
//	const int _n;//const
//};



//class A
//{
//public:
//	A(int a = 10)//默认构造
//		:_a(a)
//	{
//		cout << "A(int a = 0)" << endl;
//	}
//private:
//	int _a;
//};
//
//class Date
//{
//public:
//	Date(int year, int month, int day)
//		:_aa(1000)
//	{
//		// 函数体内初始化
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	// 声明
//	int _year; 
//	int _month;
//	int _day;
//	A _aa;//调用默认构造
//};
//
//int main()
//{
//	Date d(2023, 11, 14);
//	return 0;
//}


//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//
//
//int main() {
//	A aa(1);
//	aa.Print();
//}


//class Stack
//{
//public:
//	Stack(int n = 2)
//		:_a((int*)malloc(sizeof(int)* n))
//		, _top(0)
//		, _capacity(n)
//	{
//		//...
//		//cout << "Stack(int n = 2)" << endl;
//		if (_a == nullptr)
//		{
//			perror("malloc fail");
//			exit(-1);
//		}
//
//		memset(_a, 0, sizeof(int) * n);
//	}
//
//	//...
//
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//class MyQueue
//{
//public:
//	MyQueue(int n1 = 10, int n2 = 20)//形成默认构造函数
//		:_s1(n1)
//		, _s2(n2)
//	{}
//
//private:
//	Stack _s1;
//	Stack _s2;
//
//	int _size = 0;
//};
//
//int main()
//{
//
//	MyQueue q1;
//	MyQueue q2(100, 100);//有初始化列表那就先走初始化列表
//
//
//	return 0;
//}
//


class A
{
public:
    A(int value)//构造函数
    {
        i = value;
    }
    ~A()//析构函数   
    {
        
    }
private:
    int i;
};

A first(1);  // global object全局变量

void func()
{
    A fifth(5);
    cout << " (local automatic in create)" << endl;
    static A sixth(6);
    cout << " (local static in create)" << endl;
    A seventh(7);
    cout << " (local automatic in create)" << endl;
}
int main()
{
    cout << " (global created before main)" << endl;

    A second(2);
    cout << " (local automatic in main)" << endl;

    static A third(3);  // local object
    cout << " (local static in main)" << endl;

    func();     // call function to create objects
    A fourth(4);      // local object
    cout << " (local automatic in main)" << endl;
    return 0;
}


