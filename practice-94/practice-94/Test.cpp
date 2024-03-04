#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

class UnusualAdd {
public:
	int addAB(int A, int B) {
		if (A == 0) return B;
		if (B == 0) return A;
		int a = A ^ B;//求和后当前位的数据
		int b = (A & B) << 1;//求和后进位的数据
		return addAB(a, b);//递归两个数进行相加，任意为0时截止
	}
};


#include<iostream>
using namespace std;
//int pathNum(int n, int m)
//{
//	if (n > 1 && m > 1)
//		//b情况，递归
//		return pathNum(n - 1, m) + pathNum(n, m - 1);
//	else if (((n >= 1) && (m == 1)) || ((n == 1) && (m >= 1)))
//		// a情况，终止条件
//		return n + m;
//	else
//		//格子为0时， 路径为0
//		return 0;
//}
//int main()
//{
//	int n, m;
//	while (cin >> n >> m)
//	{
//		cout << pathNum(n, m) << endl;
//	}
//	return 0;
//}


#include <iostream>
using namespace std;

int pathNum(int n, int m)
{
	if (n == 0 || m == 0)
	{
		return 1;
	}
	return pathNum(n - 1, m) + pathNum(n, m - 1);

}
int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		cout << pathNum(n, m) << endl;
	}
	return 0;
}

class LCA {
public:
	int getLCA(int a, int b) {
		// write code here
		while (a != b)
		{
			if (a > b)
			{
				a /= 2;
			}
			else
			{
				b /= 2;
			}
		}
		return a;
	}
};


class BinInsert {
public:
	int binInsert(int n, int m, int j, int i) {
		// write code here
		for (int k = 0; k <= i - j; k++)
		{
			n |= ((m >> k) & 1) << (j + k);
		}
		return n;
	}
};

class BinInsert {
public:
	int binInsert(int n, int m, int j, int i) {
		m <<= j;
		return n | m;
	}
};

#include<cmath>

bool isPrime(int x)
{
	int n = sqrt(x);
	for (int i = 2; i <= n; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;

}

int main() {
	int n;
	cin >> n;
	int half = (n / 2);
	for (int i = half; i > 1; i--)
	{
		if (isPrime(i) && isPrime(n - i))
		{
			cout << i << endl << n - i << endl;
			break;
		}
	}
	return 0;
}