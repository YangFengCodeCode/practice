#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<thread>
using namespace std;

//void Print1(int n, int j)
//{
//	cout << "n: " << n << " j: " << j << endl;
//}
//
//void Print2()
//{
//	cout << "Test2" << endl;
//}
//
//int main()
//{
//	// 线程函数为函数指针
//	thread t1(Print1, 100, 5);
//	thread t2(Print2);
//
//	t1.join();
//	t2.join();
//
//	return 0;
//}



//void Print(int n, int& rx)
//{
//	rx += n;
//	cout << "Test: " << rx << endl;
//}
//
//int main()
//{
//	int x = 0;
//
//
//	thread t1(Print, 10000, ref(x));// 只有添加 ref 才能会被底层认为是引用
//	thread t2(Print, 20000, ref(x));
//
//	t1.join();
//	t2.join();
//
//	cout << x << endl;
//
//	return 0;
//}



//int main()
//{
//	int x = 0;
//
//	auto Func = [&](int n)
//	{
//		x += n;
//	};
//
//	thread t1(Func, 10000);
//	thread t2(Func, 20000);
//
//	t1.join();
//	t2.join();
//
//	cout << x << endl;
//	return 0;
//}




//void thread_1()
//{
//    while (1)
//    {}
//}
//void thread_2(int x)
//{
//    while (1)
//    {}
//}
//int main()
//{
//    thread first(thread_1); // 开启线程，调用：thread_1()
//    thread second(thread_2, 100); // 开启线程，调用：thread_2(100)
//
//    first.join();
//    second.join(); //join完了之后，才能往下执行。
//    while (1)
//    {
//        std::cout << "主线程\n";
//    }
//    return 0;
//}



//void thread_1()
//{
//    while (1)
//    {
//        cout << "子线程1" << endl;
//    }
//}
//
//void thread_2(int x)
//{
//    while (1)
//    {
//        cout << "子线程2" << endl;
//    }
//}
//
//int main()
//{
//    thread first(thread_1);  // 开启线程，调用：thread_1()
//    thread second(thread_2, 100); // 开启线程，调用：thread_2(100)
//
//    first.detach();
//    second.detach();
//    for (int i = 0; i < 10; i++)
//    {
//        std::cout << "主线程\n";
//    }
//    return 0;
//}



//void my_thread()
//{
//	std::cout << "Thread " << std::this_thread::get_id() << " start！" << std::endl;
//	std::this_thread::yield();	// 让出当前线程的时间片
//	std::this_thread::sleep_for(std::chrono::milliseconds(200));  // 线程休眠200毫秒
//	std::cout << "Thread " << std::this_thread::get_id() << " end！" << std::endl;
//}
//
//int main()
//{
//	std::cout << "Main thread id: " << std::this_thread::get_id() << std::endl;
//
//	std::thread t1(my_thread);
//	std::thread t2(my_thread);
//
//	t1.join();
//	t2.join();
//	return 0;
//}



//void ThreadFunc1(int& x)
//{
//	x += 10;
//}
//void ThreadFunc2(int* x)
//{
//	*x += 10;
//}
//int main()
//{
//	int a = 10;
//	// 在线程函数中对a修改，不会影响外部实参，因为：线程函数参数虽然是引用方式，但其实际引用的是线程栈中的拷贝
//	thread t1(ThreadFunc1, a);
//	t1.join();
//	cout << a << endl;
//	// 如果想要通过形参改变外部实参时，必须借助std::ref()函数
//	thread t2(ThreadFunc1, std::ref(a));
//	t2.join();
//	cout << a << endl;
//	// 地址的拷贝
//	thread t3(ThreadFunc2, &a);
//	t3.join();
//	cout << a << endl;
//	return 0;
//}


//#include <mutex>
//
//std::mutex mtx;
//int num = 0;
//
//void thread_func(int& n)
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		mtx.lock();
//		n++;
//		cout << "n: " << n << endl;;
//		mtx.unlock();
//	}
//}
//
//int main()
//{
//	std::thread myThread[10];
//	for (std::thread& a : myThread)
//	{
//		a = std::thread(thread_func, std::ref(num));
//		a.join();
//	}
//
//	std::cout << "num = " << num << std::endl;
//	std::cout << "Main thread exits!" << std::endl;
//	return 0;
//}


//#include <mutex>
//
//std::mutex mtx;  
//int num = 0;
//void thread_func(int& n)
//{
//    std::lock_guard<std::mutex> lock(mtx);  // 加锁互斥量
//    std::cout << "n: " << n++ << std::endl;
//    // 执行需要加锁保护的代码
//}  
//
//int main()
//{
//    std::thread myThread[10];
//    for (std::thread& a : myThread)
//    {
//    	a = std::thread(thread_func, std::ref(num));
//    	a.join();
//    }
//    std::cout << "num == " << num << std::endl;
//    return 0;
//}

//#include <mutex>
//
//std::mutex mtx;  // 互斥量
//
//void thread_function()
//{
//    std::unique_lock<std::mutex> lock(mtx);  // 加锁互斥量
//    std::cout << "Thread running" << std::endl;
//    // 执行需要加锁保护的代码
//
//    lock.unlock();  // 手动解锁互斥量
//    // 执行不需要加锁保护的代码
//
//    lock.lock();  // 再次加锁互斥量
//    // 执行需要加锁保护的代码
//}
//// unique_lock对象的析构函数自动解锁互斥量
//
//int main()
//{
//    std::thread t1(thread_function);
//    t1.join();
//    std::cout << "Main thread exits!" << std::endl;
//    return 0;
//}



#include <thread>
#include <mutex>
#include <condition_variable>

//int main()
//{
//	std::mutex mtx;
//	condition_variable c;
//	int n = 100;
//	bool flag = true;
//
//	thread t1([&]() {
//		int i = 0;
//		while (i < n)
//		{
//			unique_lock<mutex> lock(mtx);
//			while (!flag)
//				c.wait(lock);
//			cout << i << endl;
//			flag = false;
//			i += 2; // 偶数
//			c.notify_one();
//		}
//		});
//
//	thread t2([&]() {
//		int j = 1;
//		while (j < n)
//		{
//			unique_lock<mutex> lock(mtx);
//			while (flag)
//				c.wait(lock);
//			cout << j << endl;
//			j += 2; // 奇数
//			flag = true;
//			c.notify_one();
//		}
//		});
//
//
//	t1.join();
//	t2.join();
//	return 0;
//}


#include<vector>
#include <atomic>

int main()
{
	atomic<int> x = 0;//不用加锁了
	auto Func = [&](int n)
	{
		for (int i = 0; i < n; i++)
		{
			x++;
		}
	};

	int n;
	cin >> n;
	vector<thread> vthds(n);
	for (auto& thd : vthds)
	{
		thd = thread(Func, 10);
	}

	for (auto& thd : vthds)
	{
		thd.join();
	}

	cout << x << endl;
	return 0;
}
