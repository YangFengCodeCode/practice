#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<memory>
using namespace std;
#include "shared_ptr.h"
#include "unique_ptr.h"
#include "weak_ptr.h"

//int main()
//{
//	unique_ptr<int> a(new int(1));
//	unique_ptr<int> b(new int(2));
//	unique_ptr<int> c = std::make_unique<int>(3);
//}

//int main()
//{
//	yf::unique_ptr<int> a(new int(1));
//	yf::unique_ptr<int> b(a);
//	yf::unique_ptr<int> c = a;
//}


//int main()
//{
//	std::shared_ptr<int> aa(new int(1));
//	std::shared_ptr<int> bb(aa);
//	std::shared_ptr<int> cc(bb);
//	cout << cc.use_count() << endl;
//
//	std::shared_ptr<int> tmp(new int(3));
//	aa = tmp;
//	cout << cc.use_count() << endl;
//
//	std::shared_ptr<int> dd = std::make_shared<int>(2);
//	std::shared_ptr<int> ee(dd);
//	cout << ee.use_count() << endl;
//
//	return 0;
//}




//// shared_ptrµÄÈ±ÏÝ
//struct ListNode
//{
//	int _val;
//	//struct ListNode* _next;
//	//struct ListNode* _prev;
//
//	yf::shared_ptr<ListNode> _next;
//	yf::shared_ptr<ListNode> _prev;
//
//	ListNode(int val = 0)
//		:_val(val)
//	{}
//
//	~ListNode()
//	{
//		cout << "~ListNode()" << endl;
//	}
//};
//
//int main()
//{
//	yf::shared_ptr<ListNode> n1(new ListNode(10));
//	yf::shared_ptr<ListNode> n2(new ListNode(20));
//
//	cout << n1.use_count() << endl;
//	cout << n2.use_count() << endl;
//
//	n1->_next = n2;
//	n2->_prev = n1;
//
//	cout << n1.use_count() << endl;
//	cout << n2.use_count() << endl;
//
//	//delete n1;
//	//delete n2;
//
//	return 0;
//}



struct ListNode
{
	int _val;
	//struct ListNode* _next;
	//struct ListNode* _prev;

	//yf::shared_ptr<ListNode> _next;
	//yf::shared_ptr<ListNode> _prev;

	yf::weak_ptr<ListNode> _prev;
	yf::weak_ptr<ListNode> _next;

	ListNode(int val = 0)
		:_val(val)
	{}

	~ListNode()
	{
		cout << "~ListNode()" << endl;
	}
};

int main()
{
	yf::shared_ptr<ListNode> n1(new ListNode(10));
	yf::shared_ptr<ListNode> n2(new ListNode(20));

	cout << n1.use_count() << endl;
	cout << n2.use_count() << endl;

	n1->_next = n2;
	n2->_prev = n1;

	cout << n1.use_count() << endl;
	cout << n2.use_count() << endl;

	//delete n1;
	//delete n2;

	return 0;
}