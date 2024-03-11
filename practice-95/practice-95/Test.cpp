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
//	vector<int> step(m + 1, INT_MAX);//int_max��ʾ���ɴﵽ
//	step[n] = 0; //��ǰλ�ó�ʼ��
//	for (int i = n; i < m; ++i)
//	{
//		if (step[i] == INT_MAX)
//			continue;
//		vector<int> a;
//		//��ȡi��Լ����������
//		get_div_num(i, a);
//		for (int j = 0; j < a.size(); ++j)
//		{
//			if (a[j] + i <= m && step[a[j] + i] != INT_MAX)
//			{
//				//��Ҫ��ѡһ����Сֵ
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
//getLuckyPacket:�ӵ�ǰλ�ÿ�ʼ��������Ҫ�����ϣ�һֱ���������һ��λ�ý���
//x[]: �����е�������
//n: �������
//pos: ��ǰ������λ��
//sum: ��Ŀǰλ�õ��ۼӺ�
//multi: ��Ŀǰλ�õ��ۻ�ֵ
//*/
//int getLuckyPacket(int x[], int n, int pos, int sum, int multi)
//{
//	int count = 0;
//	//ѭ����������λ��i��ʼ���п��ܵ����
//	for (int i = pos; i < n; i++)
//	{
//		sum += x[i];
//		multi *= x[i];
//		if (sum > multi)
//		{
//			//�ҵ�����Ҫ�����ϣ���1�������ۼӺ�����ֵ�����Ƿ��з���Ҫ��ļ���
//			count += 1 + getLuckyPacket(x, n, i + 1, sum, multi);
//		}
//		else if (x[i] == 1)
//		{
//			//��β�����Ҫ���ҵ�ǰԪ��ֵΪ1��������������
//			count += getLuckyPacket(x, n, i + 1, sum, multi);
//		}
//		else
//		{
//			//���sum����multi,������û�з���Ҫ��������
//			break;
//		}
//		//Ҫ������һ��λ��֮ǰ�����Ȼָ�sum��multi
//		sum -= x[i];
//		multi /= x[i];
//		//������ͬ����û��ʲô���𣬶�ֻ����һ����ϣ�����ֱ������
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
//		//�ӵ�һ��λ�ÿ�ʼ����
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
