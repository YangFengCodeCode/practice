#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<string.h>


//int main()
//{
//	string s1("HELLOWORLD");
//	for (int i = 0; i < s1.size(); i++)
//	{
//		s1[i] += 32;
//	}
//	cout << s1 << endl;
//	cout << s1.capacity() << endl;
//
//	s1.reserve(500);//需要多少空间, 提前开好
//	cout << s1.capacity() << endl;
//
//	s1.reserve(100);//在vs2022下 空间容量不会缩小
//	cout << s1.capacity() << endl;
//
//	string s2("hello worldxxxxxxxxxxxxx");
//	cout << s2.capacity() << endl;
//	s2.reserve(10);
//	cout << s2.capacity() << endl;
//
//	return 0;
//}
//



//int main()
//{
//	string s("hello' world");
//	string::iterator begin = s.begin();
//	for (int i = 0; i <= s.size(); i++)
//	{
//		if (s[i] == '\0')
//		{
//			printf("get it\n");
//		}
//	}
//	cout << s << endl;
//	return 0;
//}

int main()
{
    string num1("1238");
    string num2("4568");
    string strNumber;
    int end1 = num1.size() - 1;
    int end2 = num2.size() - 1;
    long long int val1 = 0;
    long long int val2 = 0;
    int i = 1;
    long long int a = 0;
    while (end1 >= 0)
    {
        a = num1[end1--] - '0';
        val1 += (a * i);
        i *= 10;
    }
    i = 1;
    a = 0;
    while (end2 >= 0)
    {
        a = num2[end2--] - '0';
        val2 += (a * i);
        i *= 10;
    }

    long long int val = val1 * val2;
    while (val / 10 != 0)
    {
        strNumber += (val % 10 + '0');
        val /= 10;
    }
    strNumber += ('0' + val);
    reverse(strNumber.begin(), strNumber.end());
    cout << strNumber << endl;
  
}


