#pragma once
namespace yf
{
	template<class T>
	class shared_ptr
	{
	public:
		shared_ptr(T* ptr = nullptr)
			:_ptr(ptr)
			, _pcount(new int(1))
		{}

		// sp2(sp1)
		shared_ptr(const shared_ptr<T>& sp)
		{
			_ptr = sp._ptr;
			_pcount = sp._pcount;

			// ����ʱ++����
			++(*_pcount);
		}

		// sp1 = sp4
		// sp4 = sp4;
		// sp1 = sp2;
		shared_ptr<T>& operator=(const shared_ptr<T>& sp)
		{
			//if (this != &sp)
			if (_ptr != sp._ptr)
			{
				release();

				_ptr = sp._ptr;
				_pcount = sp._pcount;

				// ����ʱ++����
				++(*_pcount);
			}

			return *this;
		}

		void release()
		{
			// ˵�����һ��������������ˣ������ͷ���Դ��
			if (--(*_pcount) == 0)
			{
				cout << "delete:" << _ptr << endl;
				delete _ptr;
				delete _pcount;
			}
		}

		~shared_ptr()
		{
			// ����ʱ��--��������������0��
			release();
		}

		int use_count()
		{
			return *_pcount;
		}

		T& operator*()
		{
			return *_ptr;
		}

		T* operator->()
		{
			return _ptr;
		}

		T* get() const
		{
			return _ptr;
		}
	private:
		T* _ptr;
		int* _pcount;
	};

}