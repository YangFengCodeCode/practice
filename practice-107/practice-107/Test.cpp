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
//	// �̺߳���Ϊ����ָ��
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
//	thread t1(Print, 10000, ref(x));// ֻ����� ref ���ܻᱻ�ײ���Ϊ������
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
//    thread first(thread_1); // �����̣߳����ã�thread_1()
//    thread second(thread_2, 100); // �����̣߳����ã�thread_2(100)
//
//    first.join();
//    second.join(); //join����֮�󣬲�������ִ�С�
//    while (1)
//    {
//        std::cout << "���߳�\n";
//    }
//    return 0;
//}



//void thread_1()
//{
//    while (1)
//    {
//        cout << "���߳�1" << endl;
//    }
//}
//
//void thread_2(int x)
//{
//    while (1)
//    {
//        cout << "���߳�2" << endl;
//    }
//}
//
//int main()
//{
//    thread first(thread_1);  // �����̣߳����ã�thread_1()
//    thread second(thread_2, 100); // �����̣߳����ã�thread_2(100)
//
//    first.detach();
//    second.detach();
//    for (int i = 0; i < 10; i++)
//    {
//        std::cout << "���߳�\n";
//    }
//    return 0;
//}



//void my_thread()
//{
//	std::cout << "Thread " << std::this_thread::get_id() << " start��" << std::endl;
//	std::this_thread::yield();	// �ó���ǰ�̵߳�ʱ��Ƭ
//	std::this_thread::sleep_for(std::chrono::milliseconds(200));  // �߳�����200����
//	std::cout << "Thread " << std::this_thread::get_id() << " end��" << std::endl;
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
//	// ���̺߳����ж�a�޸ģ�����Ӱ���ⲿʵ�Σ���Ϊ���̺߳���������Ȼ�����÷�ʽ������ʵ�����õ����߳�ջ�еĿ���
//	thread t1(ThreadFunc1, a);
//	t1.join();
//	cout << a << endl;
//	// �����Ҫͨ���βθı��ⲿʵ��ʱ���������std::ref()����
//	thread t2(ThreadFunc1, std::ref(a));
//	t2.join();
//	cout << a << endl;
//	// ��ַ�Ŀ���
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
//    std::lock_guard<std::mutex> lock(mtx);  // ����������
//    std::cout << "n: " << n++ << std::endl;
//    // ִ����Ҫ���������Ĵ���
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
//std::mutex mtx;  // ������
//
//void thread_function()
//{
//    std::unique_lock<std::mutex> lock(mtx);  // ����������
//    std::cout << "Thread running" << std::endl;
//    // ִ����Ҫ���������Ĵ���
//
//    lock.unlock();  // �ֶ�����������
//    // ִ�в���Ҫ���������Ĵ���
//
//    lock.lock();  // �ٴμ���������
//    // ִ����Ҫ���������Ĵ���
//}
//// unique_lock��������������Զ�����������
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
//			i += 2; // ż��
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
//			j += 2; // ����
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
	atomic<int> x = 0;//���ü�����
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
