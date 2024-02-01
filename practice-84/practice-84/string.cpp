#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<iostream>
using namespace std;
#include"string.h"

namespace yf
{
	//¸³Öµ¿½±´
	string& string::operator=(const string& s)
	{
		if (this != &s)
		{
			char* tmp = new char[s._capacity + 1];
			strcpy(tmp, s._str);
			delete[] _str;
			_str = tmp;
			_size = s._size;
			_capacity = s._capacity;
		}

		return *this;
	}

	void string::reserve(size_t n)
	{
		if (n > _capacity)
		{
			char* tmp = new char[n+1];
			strcpy(tmp, _str);
			delete[] _str;
			_str = tmp;
			_capacity = n;
		}
	}

	size_t string::capacity() const
	{
		return _capacity;
	}


	void string::push_back(char ch)
	{
		if (_size == _capacity)
		{
			size_t newcpacity = _capacity == 0 ? 4 : _capacity * 2;
			reserve(newcpacity);
		}

		_str[_size] = ch;
		_size++;
		_str[_size] = '\0';
	}

	void string::append(const char* str)
	{
		int len = strlen(str);
		if (_size + len > _capacity)
		{
			reserve(_size + len);
		}

		strcpy(_str + _size, str);
		_size = _size + len;
	}


	string& string::operator+=(char ch)
	{
		push_back(ch);
		return *this;
	}


	string& string::operator+=(const char* str)
	{
		append(str);
		return *this;
	}

	void string::insert(size_t pos, char ch)
	{
		assert(pos <= _size);
		if (_size == _capacity)
		{
			size_t newcapacity = _capacity == 0 ? 4 : _capacity * 2;
			reserve(newcapacity);
		}

		int end = _size;
		while (end >= (int)pos)
		{
			_str[end + 1] = _str[end];
			end--;
		}

		_str[pos] = ch;
		_size += 1;
	}


	void string::insert(size_t pos, const char* str)
	{
		assert(pos <= _size);
		size_t lenth = strlen(str);
		if (_size + lenth > _capacity)
		{
			reserve(_size + lenth);
		}

		int end = _size;
		while (end >= (int)pos)
		{
			_str[end + lenth] = _str[end];
			--end;
		}
		strncpy(_str + pos, str, lenth);
		_size += lenth;
	}


	void string::erase(size_t pos, size_t len)
	{  
		assert(pos < _size);
		if (len == npos || pos + len > _size)
		{
			_str[pos] = '\0';
			_size = pos;
		}
		else
		{
			strcpy(_str + pos, _str + pos + len);
			_size -= len;
		}
	}

	void string::swap(string& s)
	{
		std::swap(_str, s._str);
		std::swap(_size, s._size);
		std::swap(_capacity, s._capacity);
	}

	size_t string::find(char ch, size_t pos)
	{
		for (size_t i = pos; i < _size; i++)
		{
			if (_str[i] == ch)
			{
				return i;
			}
		}

		return npos;
	}


	size_t string::find(const char* str, size_t pos)
	{
		const char* ptr = strstr(_str + pos, str);
		if (ptr == nullptr)
		{
			return npos;
		}
		else
		{
			return ptr - _str;
		}
	}


	string string::substr(size_t pos, size_t len)
	{
		assert(pos < _size);
		size_t end = pos + len;
		if (len == npos || pos + len > end)
		{
			end = _size;
		}
		string str;
		str.reserve(end - pos);
		for (size_t i = pos; i < end; i++)
		{
			str += _str[i];
		}

		return str;
	}

	void string::clear()
	{
		_size = 0;
		_str[0] = '\0';
	}


	ostream& operator<<(ostream& out, const string& s)
	{
		for (auto ch : s)
		{
			out << ch;
		}

		return out;
	}

	istream& operator>>(istream& in, string& s)
	{
		s.clear();
		char buff[128];
		char ch = in.get();
		int i = 0;
		while (ch != ' ' && ch != '\n')
		{
			buff[i++] = ch;
			if (i == 127)
			{
				buff[i] = '\0';
				s += buff;
				i = 0;
			}

			ch = in.get();
		}

		if (i > 0)
		{
			buff[i] = '\0';
			s += buff;
		}

		return in;
	}

}





