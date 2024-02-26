#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
using namespace std;



//using namespace std;
//int main() {
//    int w, h, count = 0;
//    cin >> w >> h;
//    vector<vector<int>> v;
//    v.resize(w);
//    for (auto& e : v)
//    {
//        e.resize(h, 1);
//    }
//
//    for (int i = 0; i < w; i++)
//    {
//        for (int j = 0; j < h; j++)
//        {
//            if (v[i][j] == 1)
//            {
//                count++;
//                if ((i + 2) < w)
//                {
//                    v[i + 2][j] = 0;
//                }
//
//                if ((j + 2) < h)
//                {
//                    v[i][j + 2] = 0;
//                }
//            }
//        }
//    }
//
//    cout << count << endl;
//    return 0;
//}

//int A(int n)
//{
//	int a = 1;
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		while (n >= 1)
//		{
//			a *= 10;
//			n--;
//		}
//		return a;
//	}
//}
//
//int main()
//{
//	string str = "1a33";
//	int sum = 0;
//	int n = 0;
//	for (int i = str.size() - 1; i >= 0; i--)
//	{
//		if (str[0] == '+' || str[0] == '-' || str[0] == '/')
//		{
//			str.erase(0, 1);
//			i -= 1;
//		}
//		if (str[i] - '0' > 0 && str[i] - '0' <= 9)
//		{
//			sum += (str[i] - '0') * A(n);
//			n++;
//		}
//		else
//		{
//			cout << 0;
//			return 0;
//		}
//	}
//	
//	cout << sum;
//	return 0;
//}



class Solution {
public:
	int StrToInt(string str)
	{
		if (str.empty())
			return 0;
		int symbol = 1;
		if (str[0] == '-') //处理负号
		{
			symbol = -1;
			str[0] = '0'; //这里是字符'0',不是0
		}
		else if (str[0] == '+') //处理正号
		{
			symbol = 1;
			str[0] = '0';
		}
		int sum = 0;
		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i] < '0' || str[i] > '9')
			{
				sum = 0;
				break;
			}
			sum = sum * 10 + str[i] - '0';
		}
		return symbol * sum;
	}
};


