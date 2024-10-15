#pragma once
#include<deque>
#include<vector>


namespace yf
{
	template<class T, class Container = std::deque<T>>
	class stack
	{
	public:
		void push(const T& x)
		{
			_con.push_back(x);
		}

		void pop()
		{
			_con.pop_back();
		}

		size_t size()
		{
			return _con.size();
		}

		const T& top()
		{
			return _con.back();
		}

		bool empty()
		{
			return _con.empty();
		}
		

	private:
		Container _con;
	};



	template<class T, class Container = std::deque<T>>
	class queue
	{
	public:
		void push(const T& x)
		{
			_con.push_back(x);
		}

		void pop()
		{
			_con.pop_front();
		}

		size_t size()
		{
			return _con.size();
		}

		const T& front()
		{
			return _con.front();
		}

		const T& back()
		{
			return _con.back();
		}

		bool empty()
		{
			return _con.empty();
		}


	private:
		Container _con;
	};


	template<class T>
	class less
	{
	public:
		bool operator()(const T& x, const T& y)
		{
			return x < y;
		}

	};

	template<class T>
	class greater
	{
	public:
		bool operator()(const T& x, const T& y)
		{
			return x > y;
		}
	};

	template<class T, class Container=vector<T>, class Compare = less<T>>
	class priority_queue
	{
	public:
		void adjust_up(int child)
		{
			int parent = (child - 1) / 2;
			Compare comp;
			while (child > 0)
			{ 
				if (comp(_con[parent], _con[child]))
				{
					swap(_con[parent], _con[child]);
					child = parent;
					parent = (child - 1) / 2;
				}
				else
				{
					break;
				}
			}
		}

		void adjust_down(int parent)
		{
			int child = parent * 2 + 1;
			Compare comp;
			while (child < _con.size())
			{
				if (child + 1 < _con.size() && comp(_con[child],_con[child + 1]))
				{
					++child;
				}

				if (comp(_con[parent], _con[child]))
				{
					swap(_con[parent], _con[child]);
					parent = child;
					child = parent * 2 + 1;
				}

				else
				{
					break;
				}
			}
		}




		void push(const T& x)
		{
			_con.push_back(x);
			adjust_up(_con.size()-1);
		}

		void pop()
		{
			swap(_con[0], _con[_con.size() - 1]);
			_con.pop_back();
			adjust_down(0);
		}

		size_t size()
		{
			return _con.size();
		}

		bool empty()
		{
			return _con.empty();
		}

		const T& top()
		{
			return _con[0];
		}


	private:
		Container _con;
	};


}