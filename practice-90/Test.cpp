//#include <iostream>
//using namespace std;
//#include<string>
//#include<algorithm>
//
//bool judge(string& s)
//{
//    string prv(s);
//    reverse(s.begin(), s.end());
//    return prv == s;
//}
//
//int main() {
//    string s1;
//    string s2;
//    cin >> s1;
//    cin >> s2;
//    string s(s1);
//    int count = 0;
//    for (int i = 0; i < s1.size(); i++)
//    {
//        s1.insert(i, s2);
//        cout << s1 << endl;
//        if (judge(s1) == true)
//        {
//            count++;
//        }
//        s1 = s;
//    }
//    s1 += s2;
//    if (judge(s1))
//    {
//        count++;
//    }
//    cout << count << endl;
//    return 0;
//}

//#include <iostream>
//using namespace std;
//#include<vector>
//long long Sum(vector<long long>& v)
//{
//	long long sum = 0;
//	for (int i = 0; i < v.size(); i++)
//	{
//		sum += v[i];
//	}
//	return sum;
//}
//int main() {
//	long long int n = 0;
//	long long int num = 0;
//	vector<long long> v;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num;
//		v.push_back(num);
//	}
//	long long max = Sum(v);
//	while (!v.empty())
//	{
//		if (max < Sum(v))
//		{
//			max = Sum(v);
//		}
//		v.erase(v.begin());
//	}
//	cout << max << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//#include<vector>
//
//int GetMax(int x, int y)
//{
//    return x > y ? x : y;
//}
//int main()
//{
//    int N = 0;
//    cin >> N;
//    vector<int> v(N);
//    for (int i = 0; i < N; i++)
//    {
//        cin >> v[i];
//    }
//
//    int num = v[0];
//    int max = v[0];
//    for (int i = 1; i < N; i++)
//    {
//        num = GetMax(num + v[i], v[i]);
//        if (num >= max)
//        {
//            max = num;
//        }
//    }
//
//    cout << max;
//    return 0;
//}

#include <iostream>
#include<vector>
using namespace std;
int GetMax(int a, int b) //得到两个数的最大值
{
	return (a) > (b) ? (a) : (b);
}
int main()
{
	int size;
	cin >> size;
	vector<int> nums(size);
	for (size_t i = 0; i < size; ++i)
		cin >> nums[i];
	int Sum = nums[0]; //临时最大值
	int MAX = nums[0]; //比较之后的最大值
	for (int i = 1; i < size; i++)
	{
		Sum = GetMax(Sum + nums[i], nums[i]); //状态方程if (Sum >= MAX)
		MAX = Sum;
	}
	cout << MAX << endl;
	return 0;
}