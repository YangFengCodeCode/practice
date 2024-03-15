#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


//struct A {
//	void foo() { printf("foo"); }
//	virtual void bar() { printf("bar"); }
//	A() { bar(); }
//};
//
//struct B :A{
//	void foo() { printf("b_foo"); }
//	void bar() { printf("b_bar"); }
//	B() { bar();}
//};
//
//
//int main()
//{
//	A* p = new B;
//	p->foo();
//	p->bar();
//	return 0;
//}


//class A
//{
//public:
//	void f()
//	{
//		printf("A\n");
//	}
//};
//class B : public A
//{
//public:
//	virtual void f()
//	{
//		printf("B\n");
//	}
//};
//int main()
//{
//	A* a = new B;
//	a->f();
//	delete a;
//	return 0;
//}



#include <climits>
#include<vector>
using namespace std;
#include<iostream>
class Gloves {
public:
    int findMinimum(int n, vector<int> left, vector<int> right) {
        int left_sum = 0, right_sum = 0, left_min = INT_MAX, right_min = INT_MAX;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (left[i] * right[i] == 0)
                sum += left[i] + right[i];
            else
            {
                left_sum += left[i];
                left_min = left_min < left[i] ? left_min : left[i];

                right_sum += right[i];
                right_min = right_min < right[i] ? right_min : right[i];
            }
        }

        return sum + min(left_sum - left_min + 1, right_sum - right_min + 1) + 1;
    }
};



class Test {
public:
    int a;
    int b;
    //virtual void fun() {}
    Test(int temp1 = 0, int temp2 = 0)
    {
        a = temp1;
        b = temp2;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
};
//
//int main()
//{
//    Test obj(5, 10);
//    // Changing a and b
//    int* pInt = (int*)&obj;
//    *(pInt + 0) = 100;
//    *(pInt + 1) = 200;
//    cout << "a = " << obj.getA() << endl;
//    cout << "b = " << obj.getB() << endl;
//
//    char x[14];
//    cout << sizeof(x) << endl;
//    return 0;
//}



class Base
{
public:
    virtual int foo(int x)
    {
        return x * 10;
    }
    int foo(char x[14])//数组传过来 是用指针接受 char* x
    {
        return sizeof(x) + 10;// 4 + 10 = 14
    }
};
class Derived : public Base
{
    int foo(int x)
    {
        return x * 20;
    }
    virtual int foo(char x[10])
    {
        return sizeof(x) + 20;
    }
};
int main()
{
    Derived stDerived;
    Base* pstBase = &stDerived;
    char x[10];
    printf("%d\n", pstBase->foo(100) + pstBase->foo(x));
    return 0;
}




#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string findMax(string& s)
{
    if (s.find("joker JOKER") != string::npos)
        return "joker JOKER";

    // 将两副牌取出来
    string car1 = s.substr(0, s.find('-'));
    string car2 = s.substr(s.find('-') + 1);

    //统计两副牌的数量
    int car1_count = count(car1.begin(), car1.end(), ' ') + 1;
    int car2_count = count(car2.begin(), car2.end(), ' ') + 1;
    //获取第一手牌
    string car1_first = car1.substr(0, car1.find(' '));
    string car2_first = car2.substr(0, car2.find(' '));

    //如果两手牌类型相同
    if (car1_count == car2_count)
    {
        string s0 = "345678910JQKA2jokerJOKER";
        if (s0.find(car1_first) > s0.find(car2_first))
            return car1;
        else
            return car2;
    }

    //两手牌类型不一样

    if (car1_count == 4)
        return car1;//是炸弹
    else if (car2_count == 4)
        return car2;
    else
        return "ERROR";
}

int main() {
    string s;
    getline(cin, s);
    cout << findMax(s) << endl;
    return 0;
}