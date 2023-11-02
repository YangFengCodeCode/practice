#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//class A
//{
//public:
//	A(int a)
//	    :_a(a)
//	{
//	    cout << "A(int a = 0)" << endl;
//	}
//private:
//	int _a;
//};
//
//
//class Date
//	{
//	public:
//		Date(int year, int month, int day)
//			: _ref(year)
//			, _n(1)
//			, _aa(10)
//		{
//			// 函数体内初始化
//			_year = year;
//			_month = month;
//			_day = day;
//		}
//			
//
//		void Print()
//		{
//			cout << _year << '/' << _month << '/' << _day << endl;
//		}
//	
//	private:
//		// 声明
//		int _year = 1; // 缺省值
//		int _month = 1;
//		int _day;
//		A _aa;
//		int& _ref;//引用
//		const int _n;//const
//	};
//
//
//int main()
//{
//	Date d1(2022, 2, 1);
//	return 0;
//}
//

//class A
//{
//public:
//    A(int a)
//        :_a1(a)
//        , _a2(_a1)
//    {}
//
//    void Print() {
//        cout << _a1 << " " << _a2 << endl;
//    }
//private:
//    int _a1;
//    int _a2;
//};
//
//
//int main() {
//    A aa(1);
//    aa.Print();
//}



class Stack
{
public:
    Stack(int n = 2)
        :_a((int*)malloc(sizeof(int)* n))
        , _top(0)
        , _capacity(n)
    {
        //...
        //cout << "Stack(int n = 2)" << endl;
        if (_a == nullptr)
        {
            perror("malloc fail");
            exit(-1);
        }

        memset(_a, 0, sizeof(int) * n);
    }


private:
    int* _a;
    int _top;
    int _capacity;
};

class MyQueue
{
public:
    MyQueue(int n1 = 10, int n2 = 20)
        :_s1(n1)
        , _s2(n2)
    {}

private:
    Stack _s1;
    Stack _s2;

    int _size = 0;
};

int main()
{
   
    MyQueue q1;
    MyQueue q2(10, 100);


    return 0;
}