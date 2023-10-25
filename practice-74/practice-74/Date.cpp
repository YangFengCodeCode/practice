#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"


int Date:: GetMonthDay(int year, int month)
{
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day = days[month];
	if (month == 2 && (year % 4 == 0 && year % 100 != 0) && (year % 100 == 0))
	{
		day += 1;
	}

	return day;
}

//���캯��
Date:: Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}

void Date::Print()
{
	cout << _year << "/" << _month << "/" << _day << endl;
}

//��ֵ�����
Date& Date::operator=(const Date& d)
{
	if (*this != d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	return *this;
}
//��ֵ������������ʽʵ�֣�������������һ��Ĭ�ϵġ���ʱ�û����������Լ�ʵ��һ��ȫ�ֵĸ�ֵ��������أ�
//�ͺͱ��������������ɵ�Ĭ�ϸ�ֵ��������س�ͻ�ˣ��ʸ�ֵ���������ֻ������ĳ�Ա����

bool Date::operator==(const Date& d)
{
	return (_day == d._day && _month == d._month && _year == d._year);
}

bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}

bool Date::operator>(const Date& d)
{
	if (_year > d._year)
	{
		return true;
	}

	else if (_year == d._year && _month > d._month)
	{
		return true;
	}

	else if (_year == d._year && _month == d._month && _day > d._day)
	{
		return true;
	}

	else
	{
		return false;
	}

}

bool Date:: operator>=(const Date& d)
{
	return (*this == d) || (*this > d);
}


bool Date::operator<(const Date& d)
{
	return !(*this >= d);
}

bool Date:: operator<=(const Date& d)
{
	return !(*this > d);
}


//���������ǲ������ֺ���˳���
Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		return *this -= (-day);
	}
	_day = _day + day;

	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		++_month;
		if (_month == 13)
		{
			++_year;
			_month = 1;
		}
	}
	return *this;
}

Date Date:: operator+(int day)
{
	Date tmp(*this);
	tmp += day;
	return tmp;
}


Date& Date:: operator-=(int day)
{
	if (day < 0)
	{
		*this += (-day);
	}

	_day -= day;
	while (_day < 0)
	{
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}


Date Date:: operator-(int day)
{
	Date tmp(*this);
	tmp -= day;
	return tmp;
}

//++d1
Date& Date::operator++()
{
	*this += 1;
	return *this;
}

//d1++
Date Date::operator++(int)
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}

//--d1
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}

//d1--
Date Date::operator--(int)
{
	Date tmp(*this);
	*this -= 1;
	return tmp;
}

//d1 -100
int Date::operator-(const Date& d)
{
	//���������С
	int flag = 1;
	Date max = *this;
	Date min = d;
	if (*this < d)
	{
		flag = -1;
		min = *this;
		max = d;
	}
	int n = 0;
	while (min != max)
	{
		min++;
		n++;
	}
	return n * flag;
}




