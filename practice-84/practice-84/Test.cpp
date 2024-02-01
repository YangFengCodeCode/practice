#define _CRT_SECURE_NO_WARNINGS 1
#include<assert.h>
#include<string.h>
#include<iostream>
#include<vector>
using namespace std;

//namespace yf
//{
//	class string
//	{
//
//	public:
//
//		//构造
//		string(const char* str = "")
//			:_size(strlen(str))
//			, _capacity(_size)
//			, _str(new char[_capacity + 1])
//		{
//			strcpy(_str, str);
//			//初始化列表
//		}
//
//		/*string(const char* str = "")
//		{
//			_size = strlen(str);
//			_capacity = _size;
//			_str = new char[_capacity + 1];
//
//			strcpy(_str, str);
//		}*/
//
//		//拷贝构造
//		string(const string& s)
//		{
//			_size = s._size;
//			_capacity = s._capacity;
//			_str = new char[s._capacity + 1];
//			strcpy(_str, s._str);
//		}
//
//		//赋值拷贝
//		string& operator=(const string& s)
//		{
//			if (this != &s)
//			{
//				char* tmp = new char[s._capacity + 1];
//				strcpy(tmp, s._str);
//				delete[] _str;
//
//				_str = tmp;
//				_size = s._size;
//				_capacity = s._capacity;
//			}
//
//			return *this;
//		}
//
//
//		~string()
//		{
//			delete[] _str;
//			_str = nullptr;
//			_size = _capacity = 0;
//		}
//
//
//		const char* c_str() const
//		{
//			return _str;
//		}
//
//		//[]
//		const char& operator[](size_t pos) const
//		{
//			assert(pos <= _size);
//			return _str[pos];
//		}
//
//		char& operator[](size_t pos)
//		{
//			assert(pos <= _size);
//			return _str[pos];
//		}
//
//		//迭代器
//		typedef char* itrator;
//		typedef const char* const_itrator;
//
//		itrator begin()
//		{
//			return _str;
//		}
//
//		itrator end()
//		{
//			return _str + _size;
//		}
//
//		const_itrator begin() const
//		{
//			return _str;
//		}
//
//		const_itrator end() const
//		{
//			return _str + _size;
//		}
//
//
//		//reserve
//		void reserve(size_t n)
//		{
//			if (n > _capacity)
//			{
//				char* tmp = new char[n + 1];
//				strcpy(tmp, _str);
//				delete[] _str;
//
//				_str = tmp;
//				_capacity = n;
//			}
//		}
//
//		void push_back(char ch)
//		{
//			if (_size == _capacity)
//			{
//				size_t newcapacity = _capacity == 0 ? 4 : _capacity * 2;
//				reserve(newcapacity);
//			}
//
//			_str[_size] = ch;
//			_size++;
//			_str[_size] = '\0';
//		}
//
//		void append(const char* str)
//		{
//			size_t len = strlen(str);
//			if (_size + len > _capacity)
//			{
//				reserve(_size + len);
//			}
//			strcpy(_str + _size, str);
//			_size += len;
//		}
//
//		string& operator+=(char ch)
//		{
//			push_back(ch);
//			return *this;
//		}
//
//		void insert(size_t pos, char ch)
//		{
//			assert(pos <= _size);
//
//			if (_size == _capacity)
//			{
//				size_t newcapacity = _capacity == 0 ? 4 : _capacity * 2;
//				reserve(newcapacity);
//			}
//
//			int end = _size;
//			while (end >= (int)pos)// pos是size_t类型 如果不转换 end==-1时候 会隐形类型转换
//			{
//				_str[end + 1] = _str[end];
//				--end;
//			}
//
//			_str[pos] = ch;
//			_size++;
//		}
//
//		void insert(size_t pos, const char* str)
//		{
//			assert(pos <= _size);
//			size_t len = strlen(str);
//			if (_size + len > _capacity)
//			{
//				reserve(_size + len);
//			}
//
//			int end = _size;
//			while (end >= int(pos))
//			{
//				_str[end + len] = _str[end];
//				--end;
//			}
//
//			strncpy(_str + pos, str, len);
//			_size += len;
//		}
//
//		void erase(size_t pos, size_t len = npos)
//		{
//			assert(pos < _size);
//
//			if (len == npos || pos + len >= _size)
//			{
//				_str[pos] = '\0';
//				_size = pos;
//			}
//			else
//			{
//				strcpy(_str + pos, _str + pos + len);
//				_size -= len;
//			}
//		}
//
//		void swap(string& s)
//		{
//			std::swap(_str, s._str);
//			std::swap(_size, s._size);
//			std::swap(_capacity, s._capacity);
//		}
//
//		size_t find(char ch, size_t pos = 0)
//		{
//			for (size_t i = pos; i < _size; i++)
//			{
//				if (_str[i] == ch)
//				{
//					return i;
//				}
//			}
//
//			return npos;
//		}
//
//		size_t find(const char* str, size_t pos = 0)
//		{
//			const char* ptr = strstr(_str + pos, str);
//			if (ptr == nullptr)
//			{
//				return npos;
//			}
//			else
//			{
//				return ptr - _str;
//			}
//		}
//
//
//
//		string substr(size_t pos = 0, size_t len = npos)
//		{
//			assert(pos < _size);
//			size_t end = pos + len;
//			if (len == npos || pos + len >= _size)
//			{
//				end = _size;
//			}
//
//			string str;
//			str.reserve(end - pos);
//			for (size_t i = pos; i < end; i++)
//			{
//				str += _str[i];
//			}
//
//			return str;
//		}
//
//
//
//	private:
//		size_t _size;
//		size_t _capacity;
//		char* _str;
//		const static size_t npos = -1;
//	};
//}


#include"string.h"

namespace yf
{
	void Test1()
	{
		string s1("hello string!");
		cout << s1.c_str() << endl;

		string s2(s1);
		cout << s2.c_str() << endl;

		string s3("hello world!");
		s2 = s3;
		cout << s2.c_str() << endl;

	}

	void Test2()
	{
		string s1("hello string!");
		string::iterator it = s1.begin();
		while (it != s1.end())
		{
			cout << *it << '-';
			it++;
		}
		cout << endl;
		const string s2("hello world!");
		string::const_iterator itt = s2.begin();
		while (itt != s2.end())
		{
			cout << *itt << '-';
			itt++;
		}
	}


	void Test3()
	{
		string s("hello world!");
		cout << s.capacity() << endl;
		s.reserve(100);
		cout << s.capacity() << endl;
		s.reserve(10);
		cout << s.capacity() << endl;
	}

	void Test4()
	{
		string s("hello string!");
		s.push_back('i');
		cout << s.c_str() << endl;
		s.append("iloveyou");
		cout << s.c_str() << endl;
	}

	void Test5()
	{
		string s("hello string!");
		s += 'i';
		cout << s.c_str() << endl;

		s += "i love you!";
		cout << s.c_str() << endl;
	}

	void Test6()
	{
		string s("hello string!");
		s.insert(1, 'i');
		cout << s.c_str() << endl;

		s.insert(0, 'o');
		cout << s.c_str() << endl;
	}


	void Test7()
	{
		string s("hello");
		s.insert(5, "world");
		cout << s.c_str() << endl;
	}

	void Test8()
	{
		string s("hello world");
		s.erase(4, 1);
		cout << s.c_str() << endl;
	}

	void Test9()
	{
		string s("hello world");
		size_t pos = s.find('l', 0);
		cout << pos << endl;

		size_t pos1 = s.find("xl");
		cout << pos1 << endl;
	}

	void Test10()
	{

	}
}



int main()
{
	/*yf::Test1();*/
	/*yf::Test2();*/
	/*yf::Test3();*/
	/*yf::Test4();*/
	/*yf::Test5();*/
	//yf::Test6();
	/*yf::Test7();*/
	//yf::Test8();

	//yf::Test9();
	yf::Test10();


	
	return 0;
}

