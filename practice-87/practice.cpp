using namespace std;
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<algorithm>

//int main()
//{
//	// IO型OJ可能会有多组测试用例，所以这里要持续接收输入多组测试用例。
//	int n;
//	while (cin >> n)
//	{
//		long long sum = 0;
//		vector<int> a;
//		a.resize(3 * n);
//		for (int i = 0; i < (3 * n); i++)
//		{
//			cin >> a[i];
//		}
//		std::sort(a.begin(), a.end());
//		for (int i = 0; i < n; i++) {
//			sum += a[a.size() - (2 * (i + 1))];
//		}
//		cout << sum << endl;
//	}
//
//	return 0;
//}

int main() {
    string s1, s2;
    size_t pos = 0;
    getline(cin, s1);
    getline(cin, s2);
    for (int i = 0; i < s2.size(); i++)
    {
        
        while (pos != string::npos)
        {
            pos = s1.find(s2[i]);
            if (pos != string::npos)
            {
                s1.erase(pos, 1);
            }
        }
        pos = 0;
    }

    cout << s1 << endl;
    return 0;
}


//int main()
//{
//	// 注意这里不能使用cin接收，因为cin遇到空格就结束了。
//	// oj中IO输入字符串最好使用getline。
//	string str1, str2;
//	//cin>>str1;
//	//cin>>str2;
//	getline(cin, str1);
//	getline(cin, str2);
//	// 使用哈希映射思想先str2统计字符出现的次数
//	int hashtable[256] = { 0 };
//	for (size_t i = 0; i < str2.size(); ++i)
//	{
//		hashtable[str2[i]]++;
//	}
//	// 遍历str1，str1[i]映射hashtable对应位置为0，则表示这个字符在
//	// str2中没有出现过，则将他+=到ret。注意这里最好不要str1.erases(i)
//	// 因为边遍历，边erase，容易出错。
//	string ret;
//	for (size_t i = 0; i < str1.size(); ++i)
//	{
//		if (hashtable[str1[i]] == 0)
//			ret += str1[i];
//	}
//	cout << ret << endl;
//	return 0;
//}