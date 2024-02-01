#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<string.h>


//class Solution {
//public:
//    bool checkOnlyLetters(string s, int i)
//    {
//        if (s[i] >= 'a' && s[i] <= 'z')
//        {
//            return true;
//        }
//        if (s[i] >= 'A' && s[i] <= 'Z')
//        {
//            return true;
//        }
//
//        return false;
//    }
//    string reverseOnlyLetters(string s) {
//        int begin = 0;
//        int end = s.size() - 1;
//        while (begin < end)
//        {
//            while (begin < end && checkOnlyLetters(s, end) == false)
//            {
//                end--;
//            }
//            while (begin < end && checkOnlyLetters(s, begin) == false)
//            {
//                begin++;
//            }
//
//            swap(s[begin++], s[end--]);
//        }
//        return s;
//    }
//};

//class Solution {
//public:
//    int firstUniqChar(string s) {
//        int count[26] = { 0 };
//        for (auto ch : s)
//        {
//            count[ch - 'a']++;
//        }
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (count[(s[i] - 'a')] == 1)
//            {
//                return i;
//                break;
//            }
//        }
//        return -1;
//
//    }
//};

//int main()
//{
//	char b = '3';
//	int a = 2;
//	cout << b - '0' << endl;
//	cout << '0' + a << endl;
//	printf("%c", '0' + a);
//	return 0;
//}


//class Solution {
//public:
//    string addStrings(string num1, string num2) {
//        string str;
//        int end1 = num1.size() - 1;
//        int end2 = num2.size() - 1;
//        int next = 0;
//        while (end1 >= 0 || end2 >= 0)
//        {
//            int val1 = 0, val2 = 0;
//            if (end1 >= 0)
//            {
//                val1 = num1[end1--] - '0';
//            }
//
//            if (end2 >= 0)
//            {
//                val2 = num2[end2--] - '0';
//            }
//
//            int ret = val1 + val2 + next;
//            next = ret / 10;
//            ret %= 10;
//            str.insert(str.begin(), '0' + ret);
//        }
//        if (next == 1)
//        {
//            str.insert(str.begin(), '1');
//        }
//        return str;
//
//    }
//};


class Solution {
public:
    string addStrings(string num1, string num2) {
        string str;
        int end1 = num1.size() - 1;
        int end2 = num2.size() - 1;
        int next = 0;
        while (end1 >= 0 || end2 >= 0)
        {
            int val1 = 0, val2 = 0;
            if (end1 >= 0)
            {
                val1 = num1[end1--] - '0';
            }

            if (end2 >= 0)
            {
                val2 = num2[end2--] - '0';
            }

            int ret = val1 + val2 + next;
            next = ret / 10;
            ret %= 10;
            str += ('0' + ret);
        }
        if (next == 1)
        {
            str += '1';
        }
        reverse(str.begin(), str.end());
        return str;

    }
};








