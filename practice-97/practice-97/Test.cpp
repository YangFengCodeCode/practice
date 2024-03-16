//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n, m;
//	while (cin >> n)
//	{
//		m = 2 * n - 1;
//		vector<vector<int>> dp(n, vector<int>(m, 0));
//		dp[0][0] = 1;
//		for (int i = 1; i < n; i++)
//		{
//			//第一列和最后一列都为1
//			dp[i][0] = dp[i][2 * i] = 1;
//			for (int j = 1; j < 2 * i; ++j)
//			{
//				if (j == 1)
//					//如果是第二列，则只是两个元素之和
//					dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
//				else
//					//第i,j元素等于上一行第j - 2,j - 1,j三列元素之和
//					dp[i][j] = dp[i - 1][j - 2] + dp[i - 1][j - 1] + dp[i - 1][j];
//			}
//		}
//		int k;
//		for (k = 0; k < m; k++)
//		{
//			if (dp[n - 1][k] % 2 == 0 && dp[n - 1][k] != 0)
//			{
//				cout << k + 1 << endl;
//				break;
//			}
//		}
//		if (k == m)
//			cout << -1 << endl;
//	}
//	return 0;
//}



//#include<iostream>
//#include<string>
//using namespace std;
//int main(int argc, char* argv[])
//{
//	int nRow = 0;
//	while (cin >> nRow)
//	{
//		int res = -1;
//		int myInt[] = { 4,2,3,2 };
//		if (nRow > 2)
//			res = myInt[(nRow - 2) % 4];
//		cout << res << endl;
//	}
//	return 0;
//}



//#include <iostream>
//#include<string>
//using namespace std;
//
//int main() {
//    string s;
//    getline(cin, s);
//    char ch;
//    cin >> ch;
//    int hash[128] = { 0 };
//    for (auto e : s)
//        hash[e]++;
//
//    int ret = hash[ch];
//    if (ch >= 'A' && ch <= 'Z')
//        ret += hash[ch + 32];
//    if (ch >= 'a' && ch <= 'z')
//        ret += hash[ch - 32];
//    cout << ret << endl;
//    return 0;
//}



#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;
int main()
{
    long long int N = 0;
    cin >> N;
    vector<vector<long long>> vv(N, vector<long long>(2));
    int i = 0;
    long long int v_min = INT_MIN, v_max = INT_MAX;
    while (N--)
    {
        cin >> vv[i][0] >> vv[i][1];
        v_max = min(v_max, vv[i][0] / vv[i][1]);
        i++;
    }

    for (v_min = v_max; v_min > 0; v_min--)
    {
        cout << v_min << endl;
        int flag = 1;
        for (int j = 0; j < 3; j++)
        {
            cout << "Test" << endl;
            int ret = vv[j][0] / v_min;
            cout << ret << endl;
            if ((vv[j][0] / v_min) != vv[j][1])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0) break;
    }

    v_min++;
    cout << v_min << " " << v_max << endl;


    // 请在此输入您的代码
    return 0;
}