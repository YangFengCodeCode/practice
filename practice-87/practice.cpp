using namespace std;
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<algorithm>

//int main()
//{
//	// IO��OJ���ܻ��ж��������������������Ҫ������������������������
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
//	// ע�����ﲻ��ʹ��cin���գ���Ϊcin�����ո�ͽ����ˡ�
//	// oj��IO�����ַ������ʹ��getline��
//	string str1, str2;
//	//cin>>str1;
//	//cin>>str2;
//	getline(cin, str1);
//	getline(cin, str2);
//	// ʹ�ù�ϣӳ��˼����str2ͳ���ַ����ֵĴ���
//	int hashtable[256] = { 0 };
//	for (size_t i = 0; i < str2.size(); ++i)
//	{
//		hashtable[str2[i]]++;
//	}
//	// ����str1��str1[i]ӳ��hashtable��Ӧλ��Ϊ0�����ʾ����ַ���
//	// str2��û�г��ֹ�������+=��ret��ע��������ò�Ҫstr1.erases(i)
//	// ��Ϊ�߱�������erase�����׳���
//	string ret;
//	for (size_t i = 0; i < str1.size(); ++i)
//	{
//		if (hashtable[str1[i]] == 0)
//			ret += str1[i];
//	}
//	cout << ret << endl;
//	return 0;
//}