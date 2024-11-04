#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

void Test()
{
	int i = 1;
	// 隐式类型转换
	double d = i;
	printf("%d, %f\n", i, d);

	int* p = &i;
	// 显示的强制类型转换
	int address = (int)p;
	printf("%x, %d\n", p, address);
}


//int main()
//{
//	double d = 12.34;
//	int a = static_cast<int>(d);
//	cout << a << endl;
//
//	// 对应的是以前的强制类型转换
//	//int* p = static_cast<int*>(a); 报错
//	int* p = reinterpret_cast<int*>(a);
//	cout << p << endl;
//}


//int main()
//{
//	Test();
//	return 0;
//}



//int main()
//{
//	//const int a1 = 2; //-->不加 volatile  最后结果a1 还是2 
//	volatile const int a1 = 2;// volatile 指出 a1 是随时可能发生变化的，每次使用它的时候必须从 a1 的地址中读取
//
//	//int* p1 = (int*)&a1;
//	int* p1 = const_cast<int*>(&a1);
//	*p1 = 3;
//	cout << a1 << endl;
//	cout << *p1 << endl;
//
//	return 0;
//}




//class A
//{
//public:
//	virtual void f() {}
//
//	int _a = 0;
//};
//
//class B : public A
//{
//public:
//	int _b = 1;
//};
//
//void fun(A* pa)
//{
//	// 向下转换：父->子
//	// pa指向子类对象，转回子类，是安全的
//	// pa指向父类对象，转回子类，是不安全的，存在越界的风险问题
//
//	// 不安全
//	//B* pb = (B*)pa;
//
//	//  pa指向子类对象，转回子类，正常转换
//	//  pa指向父类对象，转回子类，转换失败
//	B* pb = dynamic_cast<B*>(pa);
//	if (pb)
//	{
//		cout << pb << endl;
//		cout << pb->_a << endl;
//		cout << pb->_b << endl;
//	}
//	else
//	{
//		cout << "转换失败" << endl;
//	}
//}
//
//int main()
//{
//	A a;
//	B b;
//
//	fun(&a);
//	fun(&b);
//
//	return 0;
//}




//#include <typeinfo>
//
//class Base {};
//class Derived : public Base {};
//
//int main() {
//	Base* p = new Derived();
//	std::cout << typeid(*p).name() << std::endl; // 输出对象的实际类型
//	delete p;
//	return 0;
//}


//#include <typeinfo>
//
//class Base { virtual void func() {}; };
//class Derived : public Base {};
//
//int main() {
//	Base* p = new Derived();
//	std::cout << typeid(*p).name() << std::endl; // 输出对象的实际类型
//	delete p;
//	return 0;
//}

//#include <iostream>
//
//class Base {
//    virtual void func() {} // 必须有虚函数才能使用 RTTI
//};
//
//class Derived : public Base {};
//
//int main() {
//    Base* p = new Derived();
//    if (Derived* dp = dynamic_cast<Derived*>(p)) {
//        std::cout << "Conversion succeeded." << std::endl;
//    }
//    else {
//        std::cout << "Conversion failed." << std::endl;
//    }
//
//    Base* b = new Base();
//    if (Derived* d = dynamic_cast<Derived*>(b)) {
//        std::cout << "Conversion succeeded." << std::endl;
//    }
//    else {
//        std::cout << "Conversion failed." << std::endl;
//    }
//
//    delete p;
//    delete b;
//    return 0;
//}

//#include <typeinfo>
//
//class Base {};
//class Derived : public Base {};
//
//int main() {
//	Derived d;
//	Base* p = &d;
//	std::cout << typeid(*p).name() << std::endl;
//
//	// decltype 获取的是编译时类型，即 p 的类型
//	decltype(p) newPtr; // newPtr 的类型是 Base*，而不是 Derived*
//	std::cout << typeid(newPtr).name() << std::endl; // 输出 Base*
//	return 0;
//}



//class Base {
//	virtual void func() {} 
//};
//
//class Derived : public Base {};
//
//int main() {
//	Derived d;
//	Base* p = &d;
//
//	decltype(p) newPtr; // newPtr 的类型是 Base*，而不是 Derived*
//	std::cout << typeid(newPtr).name() << std::endl; // 输出 Base*
//
//	// typeid 使用 RTTI 获取实际类型，返回 Derived 类型信息
//	std::cout << typeid(*p).name() << std::endl; // 输出 Derived 类型
//
//	return 0;
//}




//class MyClass {
//public:
//    // 定义一个构造函数，接收一个 int 类型的参数
//    MyClass(int value) : data(value) {} // 构造函数初始化 data
//
//    void display() const {
//        std::cout << "Data: " << data << std::endl;
//    }
//
//private:
//    int data;
//};
//
//int main() {
//    MyClass obj = 10; // 隐式类型转换：int -> MyClass
//    obj.display();     // 输出：Data: 10
//    return 0;
//}


//class A
//{
//public:
//	operator int()
//	{
//		return _a1 + _a2;
//	}
//private:
//	int _a1 = 1;
//	int _a2 = 2;
//};
//
//int main ()
//{
//	A aa;
//	int ii1 = aa;
//	cout << ii1 << endl;
//
//	int ii2 = int(aa);
//	cout << ii2 << endl;
//
//	return 0;
//}




#include <iostream>
#include <vector>

class MyContainer {
public:
    MyContainer(std::initializer_list<int> init) {
        for (int i : init) {
            data.push_back(i);
        }
    }

    void display() const {
        for (int n : data) {
            std::cout << n << " ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<int> data;
};

int main() {
    MyContainer container = {1, 2, 3};
    //当编译器遇到一个初始化列表（例如 {1, 2, 3}）并且它被用来初始化容器类型时，会尝试查找一个可以接受 std::initializer_list 参数的构造函数。
    //如果找到了，就会隐式调用这个构造函数，将 initializer_list 转换为容器对象
    container.display();

    return 0;
}
