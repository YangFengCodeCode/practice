using namespace std;
#include<iostream>
#include<string>



class A
{
public:
	int _a;
};
// class B : public A
class B : virtual public A
{
public:
	int _b;
};
// class C : public A
class C : virtual public A
{
public:
	int _c;
};
class D : public B, public C
{
public:
	int _d;
};
int main()
{
	D d;
	d.B::_a = 1;
	cout << d._a << endl;
	d.C::_a = 2;
	cout << d._a << endl;
	d._b = 3;
	d._c = 4;
	d._d = 5;
	return 0;
}




//class Person
//{
//public:
//	string _name = "zzz"; // 姓名
//};
//class Student : virtual public Person
//{
//protected:
//	int _num; //学号
//};
//
//class Teacher : virtual public Person
//{
//protected:
//	int _id; // 职工编号
//};
//
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // 主修课程
//};
//
//int main()
//{
//	// 这样会有二义性无法明确知道访问的是哪一个
//	Assistant a;
//	a._name = "peter";
//	cout << a.Student::_name << endl;
//	cout << a.Teacher::_name << endl;
//
//
//	// 需要显示指定访问哪个父类的成员可以解决二义性问题，但是数据冗余问题无法解决
//	a.Student::_name = "xxx";
//	cout << a.Student::_name << endl;
//	cout << a.Teacher::_name << endl;
//
//
//	return 0;
//}













//
//
//class Person
//{
//public:
//	//Person(const char* name = "peter")
//	//	: _name(name)
//	//{
//	//	cout << "Person()" << endl;
//	//}
//
//	//Person(const Person& p)
//	//	: _name(p._name)
//	//{
//	//	cout << "Person(const Person& p)" << endl;
//	//}
//
//	//Person& operator=(const Person& p)
//	//{
//	//	cout << "Person operator=(const Person& p)" << endl;
//	//	if (this != &p)
//	//		_name = p._name;
//
//	//	return *this;
//	//}
//
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//protected:
//	string _name; // 姓名
//};
//
//class Student : public Person
//{
//public:
//	Student(const char* name, int num)
//		:
//		_num(num)
//	{
//		cout << "Student()" << endl;
//	}
//
//	Student(const Student& s)
//		: Person(s)
//		, _num(s._num)
//	{
//		cout << "Student(const Student& s)" << endl;
//	}
//
//	Student& operator = (const Student& s)
//	{
//		cout << "Student& operator= (const Student& s)" << endl;
//		if (this != &s)
//		{
//			Person::operator =(s);
//			_num = s._num;
//		}
//		return *this;
//	}
//
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//protected:
//	int _num; //学号
//};
//
//
//
//void Test()
//{
//	Student s1("jack", 18);
//	Student s2(s1);
//	Student s3("rose", 17);
//	s1 = s3;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
