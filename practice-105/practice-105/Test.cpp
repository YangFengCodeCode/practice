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
//	string _name = "zzz"; // ����
//};
//class Student : virtual public Person
//{
//protected:
//	int _num; //ѧ��
//};
//
//class Teacher : virtual public Person
//{
//protected:
//	int _id; // ְ�����
//};
//
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // ���޿γ�
//};
//
//int main()
//{
//	// �������ж������޷���ȷ֪�����ʵ�����һ��
//	Assistant a;
//	a._name = "peter";
//	cout << a.Student::_name << endl;
//	cout << a.Teacher::_name << endl;
//
//
//	// ��Ҫ��ʾָ�������ĸ�����ĳ�Ա���Խ�����������⣬�����������������޷����
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
//	string _name; // ����
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
//	int _num; //ѧ��
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
