#pragma once
namespace yf
{
	template<class T>
	class unique_ptr
	{
	public:
		// RAII
		unique_ptr(T* ptr)
			:_ptr(ptr)
		{}

		// ap2(ap1)
		unique_ptr(const unique_ptr<T>& ap) = delete;
		unique_ptr<T>& operator=(const unique_ptr<T>& ap) = delete;

		~unique_ptr()
		{
			cout << "delete:" << _ptr << endl;

			delete _ptr;
		}

		// ÏñÖ¸ÕëÒ»Ñù
		T& operator*()
		{
			return *_ptr;
		}

		T* operator->()
		{
			return _ptr;
		}

	private:
		T* _ptr;
	};

}