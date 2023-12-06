#pragma once
#include<assert.h>
namespace yf
{
	class string
	{
	public:
		//构造函数
		string(const char* s = "")
		{
			_size = strlen(s);
			_capacity = _size;
			_str = new char[_capacity + 1];
			strcpy(_str, s);
		}

		//析构函数
		~string()
		{
			delete[] _str;
			_str = nullptr;
			_capacity = _size = 0;
		}

		//拷贝构造
		string(const string& s)
		{
			_str = new char[s._capacity+1];
			_capacity = s._capacity;
			_size = s._size;
			strcpy(_str, s._str);
		}


		const char* c_str() const
		{
			return _str;
		}


		//赋值拷贝
		string& operator=(const string& s);

		//迭代器
		typedef char* iterator;
		typedef const char* const_iterator;

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}

		const_iterator begin() const
		{
			return _str;
		}

		const_iterator end() const
		{
			return _str + _size;
		}
		
		void reserve(size_t n);
		size_t capacity() const;
		void push_back(char ch);
		void append(const char* str);
		string& operator+=(char ch);
		string& operator+=(const char* str);
		void insert(size_t pos, char ch);
		void insert(size_t pos, const char* str);
		void erase(size_t pos, size_t len = npos);
		void swap(string& s);
		size_t find(char ch, size_t pos = 0);
		size_t find(const char* str, size_t pos = 0); 
		string substr(size_t pos = 0, size_t len = npos);
		void clear();
	private:
		size_t _capacity;
		size_t _size;
		char* _str;
		const static size_t npos = -1;
	};

	istream& operator>>(istream& in, string& s);
	ostream& operator<<(ostream& out, const string& s);

}
