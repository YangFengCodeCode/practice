#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include "stack_queue.h"

#include<queue>

int main()
{
	cout << "´ó¶Ñ:  " << endl;
	yf::priority_queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	cout << "size: " << q.size() << endl;
	cout << "top: " << q.top() << endl;
	q.pop();
	cout << "top: " << q.top() << endl;

	while (!q.empty())
	{
		cout << q.top() << ' ';
		q.pop();
	}
	cout << endl;
	cout << "--------------------------------------" <<endl;


	cout << "Ð¡¶Ñ:  " << endl;
	yf::priority_queue<int, vector<int>, greater<int>> q2;
	q2.push(1);
	q2.push(2);
	q2.push(3);
	q2.push(4);

	while (!q2.empty())
	{
		cout << q2.top() << ' ';
		q2.pop();
	}

	return 0;
}



//int main()
//{
//	yf::queue<int> q;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//
//	cout << "size: " << q.size() << endl; 
//	cout << "front: " << q.front() << endl;
//	cout << "back: " << q.back() << endl;
//	while (!q.empty())
//	{
//		cout << q.front() << endl;
//		q.pop();
//	}
//
//}






//int main()
//{
//	yf::stack<int> st;
//	st.push(1);
//	st.push(2);
//	st.push(3);
//
//	cout << "size: " << st.size() << endl;
//
//	while (!st.empty())
//	{
//		cout << st.top() << endl;
//		st.pop();
//	}
//	return 0;
//}