using namespace std;
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<stack>


//int main()
//{
//    int n = 0;
//    int i = 0;
//    int count = 0;
//    cin >> n;
//    vector<int> v;
//    v.resize(n + 1);//��ֹԽ��
//    v[n] = 0;//���д��
//    for (int i = 0; i < n; i++)
//    {
//        cin >> v[i];
//    }
//
//    while (i < n)
//    {
//        if (v[i] < v[i + 1])
//        {
//            while (i < n && v[i] <= v[i + 1])
//            {
//                i++;
//            }
//            i++;
//            count++;
//        }
//
//        else if (v[i] == v[i + 1])
//        {
//            i++;
//        }
//
//        else
//        {
//            while (i < n && v[i] >= v[i + 1])
//            {
//                i++;
//            }
//            i++;
//            count++;
//        }
//    }
//
//    cout << count << endl;
//    return 0;
//
//}


//int main() {
//    string s;
//    getline(cin, s);
//    stack<string> st;
//    int begin = 0;
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (s[i] == ' ')
//        {
//            string s0(s, begin, i - begin);
//            begin = i + 1;
//            st.push(s0);
//        }
//    }
//    string s0(s, begin, s.size() - 1);
//    st.push(s0);
//    while (!st.empty())
//    {
//        cout << st.top() << ' ';
//        st.pop();
//    }
//    return 0;
//}

int main()
{
	string s;
	// ע������Ҫʹ��getline��cin>>s�����ո�ͽ��ս�����
	getline(cin, s);
	// ��ת��������
	reverse(s.begin(), s.end());
	// ��ת����
	auto start = s.begin();
	while (start != s.end())
	{
		auto end = start;
		while (end != s.end() && *end != ' ')
			end++;
		reverse(start, end);
		if (end != s.end())
			start = end + 1;
		else
			start = end;
	}
	cout << s << endl;
	return 0;
}