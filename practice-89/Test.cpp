//using namespace std;
//#include<iostream>
//#include<string>
//#include<vector>
//#include<list>
//#include<stack>

//int main()
//{
//	/*vector<char> v(5, 'a');
//	for (auto e : v)
//	{
//		cout << e;
//	}*/
//
//	string s("hello");
//	cout << s.length() << endl;
//	cout << s.size() << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//#include<string>
//#include<vector>
//
//int main() {
//    string s, cur, res;
//    cin >> s;
//    for (int i = 0; i <= s.size(); i++)
//    {
//        if (s[i] >= '0' && s[i] <= '9')
//        {
//            cur.push_back(s[i]);
//        }
//
//        else {
//            if (res.size() < cur.size())
//            {
//                res = cur;
//            }
//            else
//            {
//                cur.clear();
//            }
//        }
//
//    }
//
//    cout << res;
//    return 0;
//}


#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s, table = "0123456789ABCDEF";
	int m, n;
	cin >> m >> n;
	bool flag = false;
	// 如果是负数，则转成正数，并标记一下
	if (m < 0)
	{
		m = 0 - m;
		flag = true;
	}

	if (m == 0)
	{
		cout << '0';
	}
	// 按进制换算成对应的字符添加到s
	while (m)
	{
		s += table[m % n];
		m /= n;
	}
	if (flag)
		s +='-';
	reverse(s.begin(), s.end());
	cout << s << endl;
	return 0;
}