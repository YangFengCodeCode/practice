#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
#include<limits.h>
#include<math.h>
using namespace std;

//void get_div_num(int v, vector<int>& a)
//{
//	for (int i = 2; i <= sqrt(v); ++i)
//	{
//		if (v % i == 0)
//		{
//			a.push_back(i);
//			if (v / i != i)
//				a.push_back(v / i);
//		}
//	}
//}
//int Jump(int n, int m)
//{
//	vector<int> step(m + 1, INT_MAX);//int_max表示不可达到
//	step[n] = 0; //当前位置初始化
//	for (int i = n; i < m; ++i)
//	{
//		if (step[i] == INT_MAX)
//			continue;
//		vector<int> a;
//		//获取i的约数，并保存
//		get_div_num(i, a);
//		for (int j = 0; j < a.size(); ++j)
//		{
//			if (a[j] + i <= m && step[a[j] + i] != INT_MAX)
//			{
//				//需要挑选一个最小值
//				step[a[j] + i] = step[a[j] + i] < step[i] + 1 ? step[a[j] + i] : step[i] + 1;
//			}
//			else if (a[j] + i <= m)
//			{
//				step[a[j] + i] = step[i] + 1;
//			}
//		}
//	}
//	return step[m] == INT_MAX ? -1 : step[m];
//}
//int main()
//{
//	int n, m, min_step;
//	while (cin >> n >> m)
//	{
//		min_step = Jump(n, m);
//		cout << min_step << endl;
//	}
//	return 0;
//}


//#include<iostream>
//#include<algorithm>
//using namespace std;
///*
//getLuckyPacket:从当前位置开始搜索符合要求的组合，一直搜索到最后一个位置结束
//x[]: 袋子中的所有球
//n: 球的总数
//pos: 当前搜索的位置
//sum: 到目前位置的累加和
//multi: 到目前位置的累积值
//*/
//int getLuckyPacket(int x[], int n, int pos, int sum, int multi)
//{
//	int count = 0;
//	//循环，搜索以位置i开始所有可能的组合
//	for (int i = pos; i < n; i++)
//	{
//		sum += x[i];
//		multi *= x[i];
//		if (sum > multi)
//		{
//			//找到符合要求的组合，加1，继续累加后续的值，看是否有符合要求的集合
//			count += 1 + getLuckyPacket(x, n, i + 1, sum, multi);
//		}
//		else if (x[i] == 1)
//		{
//			//如何不符合要求，且当前元素值为1，则继续向后搜索
//			count += getLuckyPacket(x, n, i + 1, sum, multi);
//		}
//		else
//		{
//			//如何sum大于multi,则后面就没有符合要求的组合了
//			break;
//		}
//		//要搜索下一个位置之前，首先恢复sum和multi
//		sum -= x[i];
//		multi /= x[i];
//		//数字相同的球，没有什么区别，都只能算一个组合，所以直接跳过
//		while (i < n - 1 && x[i] == x[i + 1])
//		{
//			i++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int x[n];
//		for (int i = 0; i < n; i++)
//		{
//			cin >> x[i];
//		}
//		sort(x, x + n);
//		//从第一个位置开始搜索
//		cout << getLuckyPacket(x, n, 0, 0, 1) << endl;
//	}
//	return 0;
//}



//bool check(int hash1[], int hash2[])
//{
//    for (int i = 0; i < 26; i++)
//    {
//        if (hash1[i] != hash2[i]) return false;
//    }
//    return true;
//}
//
//vector<int> findAnagrams(string s, string p) {
//    int hash1[26] = { 0 }, hash2[26] = { 0 };
//    for (auto e : p)
//    {
//        hash1[e - 97]++;
//    }
//    vector<int> ret;
//    for (int left = 0, right = 0; right < s.size(); right++)
//    {
//        if (right - left + 1 > p.size())
//        {
//            if (check(hash1, hash2)) ret.push_back(left);
//            left++;
//        }
//        hash2[s[right] - 97]++;
//    }
//    return ret;
//}
//
//int main()
//{
//    vector<int> v;
//    string s("cbaebabacd");
//    string p("abc");
//    v = findAnagrams(s, p);
//    for (auto e : v)
//    {
//        cout << e << ' ';
//    }
//    return 0;
//}




class Solution {
public:

    bool check(int hash1[], int hash2[])
    {
        for (int i = 0; i < 26; i++)
        {
            if (hash1[i] != hash2[i]) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int hash1[26] = { 0 }, hash2[26] = { 0 };
        for (auto e : p)
        {
            hash1[e - 97]++;
        }
        vector<int> ret;
        for (int left = 0, right = 0; right < s.size(); right++)
        {
            if (right - left + 1 > p.size())
            {
                if (check(hash1, hash2)) ret.push_back(left);
                hash2[s[left] - 97]--;
                left++;
            }
            hash2[s[right] - 97]++;
            if (right == s.size() - 1 && right - left + 1 == p.size())
            {
                if (check(hash1, hash2)) ret.push_back(left);
            }
        }
        return ret;
    }
};



class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int hash1[26] = { 0 }, hash2[26] = { 0 };
        for (auto e : p)
        {
            hash1[e - 97]++;
        }
        vector<int> ret;
        for (int left = 0, right = 0, count = 0; right < s.size(); right++)
        {
            char in = s[right];
            if (++hash2[in - 97] <= hash1[in - 97]) count++;
            if (right - left + 1 > p.size())
            {
                char out = s[left++];
                if (hash2[out - 97]-- <= hash1[out - 97]) count--;
            }

            if (count == p.size()) ret.push_back(left);
        }
        return ret;
    }
};
