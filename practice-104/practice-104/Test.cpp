using namespace std;
#include<iostream>

//class Person
//{
//protected:
//	void Print()
//	{
//		cout << "name:" << _name << endl;
//		cout << "age:" << _age << endl;
//	}
//
//protected:
//	string _name = "peter"; // 姓名
//public:
//	int _age = 18;
//};
//
////继承后父类的Person的成员（成员函数+成员变量）都会变成子类的一部分。这里体现出了
////Student和Teacher复用了Person的成员。下面我们使用监视窗口查看Student和Teacher对象，可
////以看到变量的复用。调用Print可以看到成员函数的复用。
//class Student : protected Person
//{
//public:
//	Student(int x)
//		:_stuid(x)
//	{}
//
//	void fun()
//	{
//		Print();
//		cout << _age << endl;
//		cout << _name << endl;
//	}
//
//protected:
//	int _stuid; // 学号
//};
//
////class Teacher : public Person
////{
////public:
////	Teacher(int x)
////		:_jobid(x)
////	{}
////
////protected:
////	int _jobid; // 工号
////};
//int main()
//{
//	Student s(2022);
//	/*Teacher t(1011);*/
//	s.fun();
//	//cout << s.age();
//	/*t.Print();*/
//	return 0;
//}




//class Base {
//private:
//    int privateData;
//
//protected:
//    int protectedData;
//
//public:
//    int a;
//    Base() : privateData(1), protectedData(2) {}
//};
//
//class Derived : private Base {
//public:
//    void accessBaseData() {
//        // privateData 不能访问
//        int data1 = a; // 错误：无法访问
//
//        // protectedData 可以访问
//        int data2 = protectedData; // 正确
//    }
//};
//
//int main()
//{
//    Derived d;
//}




//class Person
//{
//protected:
//	string _name; 
//	string _sex;
//	int _age; 
//};
//
//class Student : public Person
//{
//public:
//	int _No; // 学号
//};
//
//void Test()
//{
//	Student sobj;
//	// 1.子类对象可以赋值给父类对象/指针/引用
//	Person pobj = sobj;
//	Person* pp = &sobj;
//	Person& rp = sobj;// 这里特殊处理 不要加 const
//
//	//2.基类对象不能赋值给派生类对象
//	//sobj = pobj;
//
//	// 3.基类的指针可以通过强制类型转换赋值给派生类的指针
//	pp = &sobj;
//	Student* ps1 = (Student*)pp; // 这种情况转换时可以的。
//	ps1->_No = 10;
//
//	pp = &pobj;
//	Student* ps2 = (Student*)pp; // 这种情况转换时虽然可以，但是会存在越界访问的问题
//	ps2->_No = 10;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



class A { 
public: 
	void test(float a) 
	{ 
		cout << "float: " << a << endl;
	} 
};

class B : public A{
public:
	void test(int b) 
	{ 
		cout << "int: " << b << endl;;
	} 
};

int main()
{
	A* a = new A;
	B* b = new B;
	a = b;
	a->test(1.1);
	a->test(2);
	return 0;
}



//int main()
//{
//	A* a = new B;
//	//B* b = new B; 
//	//a = b; 
//	a->test(1.1);
//	a->test(2);
//	return 0;
//}
