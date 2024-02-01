#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;


//class Solution {
//public:
//    vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> v;
//        v.resize(numRows);
//        for (int i = 0; i < numRows; i++)
//        {
//            v[i].resize(i + 1);
//            v[i].front() = v[i].back() = 1;
//        }
//
//        for (int i = 1; i < numRows; i++)
//        {
//            for (int j = 0; j < v[i].size(); j++)
//            {
//                if (v[i][j] == 0)
//                {
//                    v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
//                }
//            }
//        }
//        return v;
//    }
//};

//int main()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.erase(v.end()-1);
//	for (auto e : v)
//	{
//		cout << e << ' ';
//	}
//	cout << endl;
//
//	v.erase(v.begin(), v.begin() + 2);
//	for (auto e : v)
//	{
//		cout << e << ' ';
//	}
//	cout << endl;
//
//	return 0;
//}


//int main()
//{
//	vector<int> v(1);
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	//vector<int>::iterator pos = find(v.begin(), v.end(), 9);
//	v.insert(v.end(), 100);
//	for (auto e : v)
//	{
//		cout << e << ' ';
//	}
//
//	return 0;
//
//}

//int main()
//{
//    vector<int> nums;
//    nums.push_back(1);
//    nums.push_back(0);
//    nums.push_back(1);
//    vector<int>::iterator it = nums.begin();
//    while (it != nums.end())
//    {
//        vector<int>::iterator pos = find(it + 1, nums.end(), *it);
//        if (pos == nums.end())
//        {
//            break;
//        }
//        else
//        {
//            nums.erase(pos);
//        }
//        ++it;
//    }
//
//    cout << *it << endl;
//
//    return 0;
//}


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int arr[10000] = { 0 };
        for (auto e : nums)
        {
            arr[e] += 1;
        }

        vector<int>::iterator it = nums.begin();
        while (it != nums.end())
        {
            if (arr[*it] > 1)
            {
                nums.erase(it);
                arr[*it] -= 1;
            }
            ++it;
        }

        return nums.size();

    }
};