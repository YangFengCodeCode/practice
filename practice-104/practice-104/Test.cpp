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
//	string _name = "peter"; // ����
//public:
//	int _age = 18;
//};
//
////�̳к����Person�ĳ�Ա����Ա����+��Ա�����������������һ���֡��������ֳ���
////Student��Teacher������Person�ĳ�Ա����������ʹ�ü��Ӵ��ڲ鿴Student��Teacher���󣬿�
////�Կ��������ĸ��á�����Print���Կ�����Ա�����ĸ��á�
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
//	int _stuid; // ѧ��
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
////	int _jobid; // ����
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
//        // privateData ���ܷ���
//        int data1 = a; // �����޷�����
//
//        // protectedData ���Է���
//        int data2 = protectedData; // ��ȷ
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
//	int _No; // ѧ��
//};
//
//void Test()
//{
//	Student sobj;
//	// 1.���������Ը�ֵ���������/ָ��/����
//	Person pobj = sobj;
//	Person* pp = &sobj;
//	Person& rp = sobj;// �������⴦�� ��Ҫ�� const
//
//	//2.��������ܸ�ֵ�����������
//	//sobj = pobj;
//
//	// 3.�����ָ�����ͨ��ǿ������ת����ֵ���������ָ��
//	pp = &sobj;
//	Student* ps1 = (Student*)pp; // �������ת��ʱ���Եġ�
//	ps1->_No = 10;
//
//	pp = &pobj;
//	Student* ps2 = (Student*)pp; // �������ת��ʱ��Ȼ���ԣ����ǻ����Խ����ʵ�����
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
