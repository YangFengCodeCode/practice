#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;


//int main()
//{
//	string s1; //空字符串
//	string s2("hello world");// 构造string类对象
//
//	string s3(10, 'x');//包含n个字符
//
//	string s4 = s2;//拷贝构造
//	string s5(s2);//拷贝构造
//
//	string s6 = "hello string";//隐形转换
//	const string& s7 = "hello const string";//临时对象具有常属性
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//	cout << s4 << endl;
//	cout << s6 << endl;
//	cout << s7 << endl;
//
//	//这些类是可以改变的
//	s1 = s2;
//	cout << s1 << endl;
//
//	s1 = "world";
//	cout << s1 << endl;
//
//	s1 = 'x';
//	cout << s1 << endl;
//
//	return 0;
//}


//int main()
//{
//	string str("Test string");
//	cout << "size: " << str.size() << "\n";
//	cout << "length: " << str.length() << "\n";
//	cout << "capacity: " << str.capacity() << "\n";
//	return 0;
//}
//



//int main()
//{
//	string s1("hello world");
//	cout << s1.capacity() << endl;
//
//	s1.reserve(500);//需要多少空间, 提前开好
//	cout << s1.capacity() << endl;
//
//	s1.reserve(100);//在vs2022下 空间容量不会缩小
//	cout << s1.capacity() << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1("hello world");
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//	cout << s1 << '\n' << endl;
//
//	// > capacity --> 扩容+尾插
//	//s1.resize(100);
//	s1.resize(100, 'x');
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//	cout << s1 << '\n' << endl;
//
//	// size < n < capacity  -> 尾插
//	string s2("hello world");
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl;
//	cout << s2 << endl;
//	s2.resize(12);
//	cout << s2.size() << endl;
//	cout << s2.capacity() << '\n' << endl;
//
//	// n < size -> 删除数据，保留前n个
//	string s3("hello world");
//	cout << s3.size() << endl;
//	cout << s3.capacity() << endl;
//	cout << s3 << endl;
//	s3.resize(5);
//	cout << s3 << endl;
//	cout << s3.size() << endl;
//	cout << s3.capacity() << '\n' << endl;
//
//	string s5;
//	s5.resize(100, '#');
//	cout << s5 << endl;
//
//	return 0;
//}
//



//int main()
//{
//	//operator [] 
//	string s1("hello world");
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i] << " ";
//		//底层是这样-->cout << s1.operator[](i) << " "
//	}
//	cout << endl;
//	s1[0] = 'x';
//	cout << s1 << endl;
//}


//int main()
//{
//	try
//	{
//		string s1("hello world");
//		cout << s1.at(10) << endl;
//		cout << s1.at(11) << endl;
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}



//int main()
//{
//	string s1("hello world");
//	// iterator用法像指针
//	string::iterator it = s1.begin();
//	while (it != s1.end())// s.end()指向'\0'
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//	reverse(s1.begin(), s1.end());//左闭右开区间
//	cout << s1 << endl;
//
//	const string s2("hello world");
//	s1[0] = 'x';
//	//s2[0] = 'x' --> error
//	cout << s1 << endl;
//
//	//遍历s2
//	string::const_iterator itt = s2.begin();
//	while (itt != s2.end())
//	{
//		cout << *itt << " ";
//		++itt;
//	}
//}



//void func(const string& s)
//{
//	string::const_reverse_iterator it = s.rbegin();
//	while (it != s.rend())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//}
//
//int main()
//{
//	string s1("hello world");
//	string::reverse_iterator it1 = s1.rbegin();
//	while (it1 != s1.rend())
//	{
//		cout << *it1 << " ";
//		++it1;
//	}
//	cout << endl;
//	func(s1);
//	return 0;
//}


//int main()
//{
//	string s1("hello world");
//	for (auto e : s1)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	return 0;
//}
//



//int main()
//{
//	string s1("hello");
//	s1.push_back(' ');
//	s1.append("world");
//	cout << s1 << endl;
//
//	string s2 = "xxxx";
//	s2.append(s1);
//	cout << s2 << endl;
//
//	s2.append(++s1.begin(), --s1.end());
//	cout << s2 << endl;
//
//	return 0;
//}
//
//



//int main()
//{
//	string s1("hello");
//	string s2("world");
//
//	string ret1 = s1 + s2;
//	cout << ret1 << endl;
//
//	string ret2 = s1 + "xx";
//	cout << ret2 << endl;
//
//	string ret3 = "xx" + s1;
//	cout << ret3 << endl;
//
//	string ret4 = 'a' + s1;
//	cout << ret4 << endl;
//
//	return 0;
//}


//int main()
//{
//	string s1("Limitless"), s2("00");
//	s1.insert(2, "123");//在p0位置插入字符串
//	cout << s1 << endl;
//
//	s1.insert(3, s2);
//	cout << s1 << endl;
//
//	s1.insert(3, 5, 'X');//在p0位置插入n个字符
//	cout << s1 << endl;
//
//	s1.insert(3, "abc", 2);//在p0位置插入字符串前两个字符
//	cout << s1 << endl;
//	return 0;
//}


//int main()
//{
//	string s1("hello world");
//	s1.erase(9, 1);
//	cout << s1 << endl;
//
//	s1.erase(4);//不指明n, 默认把4位置(包括4位置)后面所有的删除
//	cout << s1 << endl;
//
//	s1.erase(s1.begin());
//	cout << s1 << endl;
//
//
//	s1.erase(s1.begin(), s1.end() - 1);
//	cout << s1 << endl;
//	return 0;
//}


//int main()
//{
//	string s1("hello world hello yf");
//	cout << s1 << endl;
//
//	s1.replace(5, 2, "abc");//s1 pos位置开始往后2个位置被abc覆盖
//	cout << s1 << endl;
//	return 0;
//}


//int main()
//{
//	string s2("hello world");
//	string s3("yf");
//	s2.swap(s3);
//
//	cout << s2 << endl;
//	cout << s3 << endl;
//	return 0;
//}

//int main()
//{
//	string s2("hello world");
//	s2.pop_back();
//	cout << s2 << endl;
//	return 0;
//}



//int main()
//{
//	char* cstr;
//	string str("Please split this phrase into tokens");
//	cstr = new char[str.size() + 1];
//	strcpy(cstr, str.c_str());
//	cout << cstr << endl;
//}
//
//
//int main()
//{
//	string s1("hello world world");
//	cout << s1.size() << endl;
//	string s2("world");
//
//	//1.从下标5位置往前开始找字符
//	size_t pos1 = s1.rfind(' ', 5);
//	cout << pos1 << endl;
//
//	//2.从下标最后一个元素位置往前找字符串
//	size_t pos2 = s1.rfind("world");
//	cout << pos2 << endl;
//
//	//3.从下标最后一个元素位置往前找string
//	size_t pos3 = s1.rfind(s2);
//	cout << pos3 << endl;
//
//	//从下标16位置开始往前找s前n个的字符串
//	size_t pos4 = s1.rfind("woaaa", 16, 2);
//	cout << pos4 << endl;
//	return 0;
//}


//int main()
//{
//	string s("hello world hello yf");
//	cout << "lenth == " << s.size() << endl;
//
//	//找第一次不是 l 或者 l 的位置
//	size_t pos1 = s.find_first_not_of("ll");
//	cout << pos1 << endl;
//
//	//找第一次不是 l 或者 o 的位置
//	size_t pos2 = s.find_first_not_of("lo");
//	cout << pos2 << endl;
//
//	//找最后一次不是 l 或者 o 的位置
//	size_t pos3 = s.find_last_not_of("lo");
//	cout << pos3 << endl;
//
//	//从下标5往前找
//	size_t pos4 = s.find_last_not_of('o', 5);
//	cout << pos4 << endl;
//
//	return 0;
//}

//
//int main()
//{
//	string s("hello world");
//	size_t pos = s.find("world");
//	cout << pos << endl;
//
//	string sub = s.substr(pos);
//	cout << sub << endl;
//
//	return 0;
//}


int main()
{
	string s;
	getline(cin, s);
	cout << s << endl;
	size_t pos = s.rfind(' ');
	if (pos != string::npos)
	{
		cout << s.size() - pos - 1 << endl;
	}
	else
	{
		cout << s.size() << endl;
	}

	return 0;
}


//int main()
//{
//	string s1("123");
//	string s2("100.11111");
//
//	int ret1 = stoi(s1);
//	int ret2 = stoi(s2);
//	cout << ret1 << endl;
//	cout << ret2 << endl;
//	return 0;
//}

