#pragma once

#include<iostream>
#include<assert.h>
using namespace std;

class Date
{
public:
	//全缺省参数只需要在声明中
	Date(int year = 1, int month = 1, int day = 1);

	void Print();
	int GetMonthDay(int year, int month);

	Date& operator=(const Date& d);
	bool operator==(const Date& y);
	bool operator!=(const Date& y);
	bool operator>(const Date& y);
	bool operator<(const Date& y);
	bool operator>=(const Date& y);
	bool operator<=(const Date& y);

	int operator-(const Date& d);
	Date& operator+=(int day);
	Date operator+(int day);
	Date& operator-=(int day);
	Date operator-(int day);

	Date& operator++();
	Date operator++(int);

	Date& operator--();
	Date operator--(int);
private:
	int _year;
	int _month;
	int _day;
};
