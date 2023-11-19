#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	// Date(const Date d)--> 错误写法：编译报错，会引发无穷递归
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	Date d2(d1);//将d1拷贝给d2
//	return 0;
//}


//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)//默认构造函数
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//void func1(Date d)//调用拷贝构造 -->形参是实参的拷贝
//{
//	/*
//	(1).d1对象传入形参时，会先会产生一个临时变量，就叫 d。
//	(2).然后调用拷贝构造函数把d1的值给d。 整个这两个步骤有点像：Date d(d1);
//	(3).等func1()执行完后, 析构掉 d 对象。
//	*/
//}
//
//Date func2()
//{
//	Date d2(2023, 11, 20);
//	return d2;//调用拷贝构造
//	/*
//	(1).先会产生一个临时变量，就叫XXXX吧。
//	(2).然后调用拷贝构造函数把d2的值给XXXX。整个这两个步骤有点像：Date XXXX(d2);
//	(3).在函数执行到最后先析构d2局部变量。
//	(4).等func2()执行完后再析构掉XXXX对象。
//	*/
//}
//
//int main()
//{
//	Date d1(2023, 10, 22);
//	func1(d1);
//	Date d3(d1); //调用拷贝构造
//	Date d4 = d1;//调用拷贝构造
//	return 0;
//}



// 全局的operator==
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	bool operator==(const Date& dd2)
//	{
//		return _year == dd2._year
//			&& _month == dd2._month
//			&& _day == dd2._day;      
//	}
//
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//void Test2()
//{
//	Date d1(2018, 9, 26);
//	Date d2(2018, 9, 27);
//	/*cout << operator>(&d1, d2) << endl;
//	  cout << operator==(&d1, d2) << endl;*/
//	cout << (d1 == d2) << endl;
//}
//
//int main()
//{
//	Test2();
//	return 0;
//}
//
//

 
