#include<stack>
#include<vector>
#include<iostream>
#include<string>
#include<list>
#include<queue>

using namespace std;


void Test1()
{
	queue<int> q1;
	cout << q1.size() << endl;

	vector<int> v{ 1, 2, 3, 4 };
	queue<int, vector<int>> q2(v);
	cout << q2.size() << endl;

	queue<int> q3(q1);
	cout << q3.size() << endl;
}

void Test2()
{
	queue<int> q1;
	if (q1.empty()) cout << "q1 is empty" << endl;
	else cout << "q1 is not empty" << endl;
	
	vector<int> v{ 1, 2, 3, 4 };
	queue<int, vector<int>> q2(v);
	if (q2.empty()) cout << "q2 is empty" << endl;
	else cout << "q2 is not empty" << endl;

	

}


void Test3()
{
	vector<int> v{ 1, 2, 3, 4 };
	queue<int, vector<int>> q2(v);
	cout << "front: " << q2.front() << endl;
	cout << "back: " << q2.back() << endl;
}

void Test4()
{
	queue<int> q;
	for (int i = 0; i < 4; i++)
	{
		q.push(i);
	}

	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}
}

void Test5()
{
	queue<int> q1, q2;
	for (int i = 0; i < 4; i++)
	{
		q2.push(i);
	}

	q1.swap(q2);
	cout << "q1.size--> " << q1.size() << endl;
	cout << "q2.size--> " << q2.size() << endl;
}


void Test6()
{
	priority_queue<int> q1;
	cout << q1.size() << endl;

	vector<int> v{ 1, 2, 3, 4 };
	priority_queue<int, vector<int>> q2(v.begin(), v.end());// 这里不同queue
	cout << q2.size() << endl;

	priority_queue<int> q3(q1);
	cout << q3.size() << endl;
}

#include <vector>
#include <queue>
#include <functional> // greater算法的头文件
void TestPriorityQueue()
{
	// 默认情况下，创建的是大堆，其底层按照小于号比较
	vector<int> v{ 3,2,7,6,0,4,1,9,8,5 };
	priority_queue<int> q1;
	for (auto& e : v)
	{
		q1.push(e);
	}

	while (!q1.empty())
	{
		cout << q1.top() << ' ';
		q1.pop();
	}
	cout << endl;

	// 如果要创建小堆，将第三个模板参数换成greater比较方式
	priority_queue<int, vector<int>, greater<int>> q2(v.begin(), v.end());
	while (!q2.empty())
	{
		cout << q2.top() << ' ';
		q2.pop();
	}
}

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
	{}
	bool operator<(const Date& d)const
	{
		return (_year < d._year) ||
			(_year == d._year && _month < d._month) ||
			(_year == d._year && _month == d._month && _day < d._day);
	}
	bool operator>(const Date& d)const
	{
		return (_year > d._year) ||
			(_year == d._year && _month > d._month) ||
			(_year == d._year && _month == d._month && _day > d._day);
	}
	friend ostream& operator<<(ostream& _cout, const Date& d)
	{
		_cout << d._year << "-" << d._month << "-" << d._day;
		return _cout;
	}
private:
	int _year;
	int _month;
	int _day;
};
void TestPriorityQueue2()
{
	// 大堆，需要用户在自定义类型中提供<的重载
	priority_queue<Date> q1;
	q1.push(Date(2018, 10, 29));
	q1.push(Date(2018, 10, 28));
	q1.push(Date(2018, 10, 30));
	cout << q1.top() << endl;
	// 如果要创建小堆，需要用户提供>的重载
	priority_queue<Date, vector<Date>, greater<Date>> q2;
	q2.push(Date(2018, 10, 29));
	q2.push(Date(2018, 10, 28));
	q2.push(Date(2018, 10, 30));
	cout << q2.top() << endl;
}

int main()
{
	//Test6();
	TestPriorityQueue2();
	return 0;
}




//void Test1()
//{
//	stack<int> st;
//	if (st.empty()) cout << " st is empty" << endl;
//	else cout << "st is not empty" << endl;
//}
//
//void Test2()
//{
//	vector<int> v{ 1, 2, 3, 4 };
//	stack<int, vector<int>> st(v);
//
//	cout << st.top() << endl;
//}
//
//void Test3()
//{
//	
//	stack<int> st;
//	st.push(1);
//	st.push(2);
//	st.push(3);
//
//	while (!st.empty())
//	{
//		cout << st.top() << endl;
//		st.pop();
//	}
//
//}
//
//void Test4()
//{
//	stack<string> st;
//	st.emplace("first");
//	st.emplace("second");
//
//	while (!st.empty())
//	{
//		cout << st.top() << endl;
//		st.pop();
//	}
//}
//
//void Test5()
//{
//	stack<int> st1, st2;
//
//	st1.push(1);
//	st1.push(2);
//	cout << st1.size() << endl;
//
//	st2.push(10);
//	st2.push(20);
//	st2.push(30);
//	cout << st2.size() << endl;
//
//	st1.swap(st2);
//	cout << st1.size() << endl;
//	cout << st2.size() << endl;
//}
//
//int main()
//{
//	Test5();
//	return 0;
//}

//int main()
//{
//	stack<int> st1;
//
//	vector<int> v{ 1, 2, 3, 4 };
//	stack<int, vector<int>> st2(v);
//	cout << " st2: " << st2.size() << endl;
//
//
//	stack<int, vector<int>> st3(st2);
//	cout << " st3: " << st3.size() << endl;
//
//	stack<int> st4(st1);
//	cout << " st4: " << st4.size() << endl;
//
//	return 0;
//
//}