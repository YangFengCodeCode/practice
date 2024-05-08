#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

//int waitTime = 0;
//bool vis[11];
//bool dfs(vector<vector<int>>& vv, int pos)
//{
//    int n = vv.size();
//    if (pos == n) return true;
//    for (int i = 0; i < n; i++)
//    {
//        if (vv[i][0] + vv[i][1] >= waitTime && !vis[i])
//        {
//            waitTime += (vv[i][0] + vv[i][2]);
//            vis[i] = true;
//            dfs(vv, i + 1);
//            waitTime -= (vv[i][0] + vv[i][2]);
//            vis[i] = false;
//        } 
//        else return false;
//    }
//}
//
//int main()
//{
//    int T;
//    while (cin >> T)
//    {
//        for (int i = 0; i < T; i++)
//        {
//            int N;
//            vector<vector<int>> vv;
//            cin >> N;
//
//            for (int i = 0; i < N; i++)
//            {
//                int t, d, l;
//                cin >> t >> d >> l;
//                vv.push_back({ t, d, l });
//                cout << "Test" << endl;
//
//
//            }
//            cout << "Test" << endl;
//
//            bool ret = dfs(vv, 0);
//            if (ret) cout << "YES" << endl;
//            else cout << "NO" << endl;
//        }
//    }
//    return 0;
//}


using namespace std;
#include<iostream>
#include<vector>
#include<string.h>

//int dx[4] = { 1, -1, 0, 0 };
//int dy[4] = { 0, 0, 1, -1 };
//bool vis[51][51];
//int m, n;
//
//void dfs(int i, int j, vector<vector<char>>& land)
//{
//	for (int k = 0; k < 4; k++)
//	{
//		int x = i + dx[k];
//		int y = j + dy[k];
//		if (x >= 0 && x < m && y >= 0 && y < n && !vis[x][y] && land[i][j] == '1')
//		{
//			vis[x][y] = true;
//			dfs(x, y, land);
//		}
//	}
//}
//
//int main()
//{
//	int T;
//	while (cin >> T)
//	{
//		for (int i = 0; i < T; i++)
//		{
//			int M, N;
//			cin >> M >> N;
//			m = M, n = N;
//			vector<vector<char>> land(M, vector<char>(N));
//			for (int i = 0; i < M; i++)
//			{
//				for (int j = 0; j < N; j++)
//				{
//					cin >> land[i][j];
//				}
//			}
//
//			int ret = 0;
//			memset(vis, 0, sizeof(vis));
//			for (int i = 0; i < M; i++)
//			{
//				for (int j = 0; j < N; j++)
//				{
//					if (!vis[i][j] && land[i][j] == '1')
//					{
//						ret++;
//						vis[i][j] = true;
//						dfs(i, j, land);
//					}
//				}
//			}
//
//			cout << ret << endl;
//		}
//	}
//}


//int main()
//{
//    int x = 8;
//    if (x < 1) return 0;
//    long long int left = 1, right = x;
//    while (left < right)
//    {
//        long long mid = left + (right - left) / 2;
//        long long m = mid * mid;
//        if (m < x) left = mid + 1;
//        else right = mid;
//    }
//    cout << left;
//
//    return 0;
//}


//int main()
//{
//    int x = 8;
//    if (x < 1) return 0;
//    long long int left = 1, right = x;
//    while (left < right)
//    {
//        long long mid = left + (right - left+1) / 2;
//        long long m = mid * mid;
//        if (m <= x) left = mid;
//        else right = mid-1;
//    }
//    cout << left;
//
//    return 0;
//}


//using namespace std;
//int get(int a, int b)
//{
//    int left = 1, right = a;
//    while (left < right)
//    {
//        int mid = left + (right - left + 1) / 2;
//        if ((a / mid) >= b) left = mid;
//        else right = mid - 1;
//    }
//    return left;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    int minv = INT_MIN, maxv = INT_MAX;
//    int a, b;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a >> b;
//        //对于所有的集合取交集
//        //minv = max(minv, get(a, b));
//        maxv = min(maxv, get(a, b));
//    }
//
//    cout << maxv;
//
//    return 0;
//}



//#include <iostream>
//#include <vector>
//using namespace std;
//
//// 创建飞机结构体变量
//struct plane
//{
//    int t, d, l;
//};
//bool vis[15];  // true表示飞机降落，false表示飞机未降落
//bool flag;  // 标记是否全部安全降落
//vector<plane> p(15);
//// 深搜
//void dfs(int m, int cnt, int last)  // last表示此前所有飞机降落所需的单位时间
//{
//    if (cnt == m)
//    {
//        flag = true;
//        return;
//    }
//    for (int i = 0; i < m; i++)
//    {
//        if (!vis[i] && p[i].t + p[i].d >= last)  // 只有来的时刻+盘旋时间 > last 的飞机才可以安全降落
//        {
//            vis[i] = true;
//            dfs(m, cnt + 1, max(last, p[i].t) + p[i].l);
//            vis[i] = false;
//        }
//    }
//}
//
//int main()
//{
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        int N;
//        cin >> N;
//        for (int i = 0; i < N; ++i)
//            cin >> p[i].t >> p[i].d >> p[i].l;
//        flag = false;
//        dfs(N, 0, 0);
//        if (flag)
//            cout << "YES" << endl;
//        else
//            cout << "NO" << endl;
//    }
//    return 0;
//}


//using namespace std;
//bool vis[11];
//bool flag;
//
//bool dfs(vector<vector<int>>& vv, int pos, int waitTime)
//{
//    int n = vv.size();
//    if (pos == n) return true;
//    for (int i = 0; i < n; i++)
//    {
//        if (vv[i][0] + vv[i][1] >= waitTime && !vis[i])
//        {
//            vis[i] = true;
//            if (dfs(vv, pos + 1, max(waitTime, vv[i][0]) + vv[i][2])) return true;
//            vis[i] = false;
//        }
//    }
//
//    return false;
//
//}
//
//int main()
//{
//    int T;
//    while (cin >> T)
//    {
//        for (int i = 0; i < T; i++)
//        {
//            int N;
//            vector<vector<int>> vv;
//            cin >> N;
//
//            for (int i = 0; i < N; i++)
//            {
//                int t, d, l;
//                cin >> t >> d >> l;
//                vv.push_back({ t, d, l });
//            }
//
//            memset(vis, 0, sizeof(vis));
//            flag = false;
//            bool ret = dfs(vv, 0, 0);
//            if (ret) cout << "YES" << endl;
//            else cout << "NO" << endl;
//        }
//    }
//    return 0;
//}

//

using namespace std;
#include<iostream>
#include<vector>
#include<string.h>
//
//int dx[8] = { 1, -1, 0, 0, -1, -1, 1, 1 };
//int dy[8] = { 0, 0, 1, -1, -1,  1, -1, 1 };
//bool vis[51][51];
//bool viswater[51][51];
//int m, n;
//bool flag;
//
//void dfs(int i, int j, vector<vector<char>>& land)
//{
//	for (int k = 0; k < 4; k++)
//	{
//		int x = i + dx[k];
//		int y = j + dy[k];
// 		if (x >= 0 && x < m && y >= 0 && y < n && !vis[x][y] && land[i][j] == '1')
//		{
//			vis[x][y] = true;
//			dfs(x, y, land);
//		}
//	}
//}
//
//void check(int i, int j, vector<vector<char>>& land)
//{
//	for (int k = 0; k < 8; k++)
//	{
//		int x = i + dx[k];
//		int y = j + dy[k];
//		if (x >= 0 && x < m && y >= 0 && y < n && !viswater[x][y] && land[x][y] == '0')
//		{
//			if (x == 0 || x == m - 1 || y == 0 || y == n - 1) flag = true;
//			viswater[x][y] = true;
//			check(x, y, land);
//		}
//	}
//}
//
//int main()
//{
//	int T;
//	while (cin >> T)
//	{
//		for (int i = 0; i < T; i++)
//		{
//			int M, N;
//			cin >> M >> N;
//			m = M, n = N;
//			vector<vector<char>>land(M, vector<char>(N));
//			for (int i = 0; i < M; i++)
//			{
//				for (int j = 0; j < N; j++)
//				{
//					cin >> land[i][j];
//				}
//			}
//
//			int ret = 0;
//			memset(vis, 0, sizeof(vis));
//			//flag = false;
//			for (int i = 0; i < M; i++)
//			{
//				for (int j = 0; j < N; j++)
//				{
//					if (!vis[i][j] && land[i][j] == '1')
//					{
//						ret++;
// 						vis[i][j] = true;
//						dfs(i, j, land);
//						flag = false;
//						memset(viswater, 0, sizeof(viswater));
// 						check(i, j, land);
//						if (flag == false) ret--;
//					}
//				}
//			}
//
//			cout << ret << endl;
//		}
//	}
//}



//using namespace std;
//typedef pair<int, int> PII;
//
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//bool vis[501][501];
//int m, n, k;
//int c;
//
//void dfs(int i, int j, int sum, vector<vector<int>>& vv)
//{
//	c++;
//	for (int k = 0; k < 4; k++)
//	{
//		int x = i + dx[k];
//		int y = j + dy[k];
//		if (x >= i && x < m && y >= j && y < n && !vis[x][y] && sum + vv[x][y] <= k)
//		{
//			vis[x][y] = true;
//			dfs(x, y, sum + vv[x][y], vv);
//		}
//	}
//}
//
//int main()
//{
//	cin >> m >> n >> k;
//	vector<vector<int>> vv(m, vector<int>(n));
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> vv[i][j];
//		}
//	}
//
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (vv[i][j] <= k)
//			{
//				c= 0;
//				memset(vis, 0, sizeof(vis));
//				dfs(i, j, 0, vv);
//				sum += c;
//			}
//
//		}
//	}
//
//	cout << sum << endl;
//	return 0;
//}




//using namespace std;
//typedef pair<int, int> PII;
//
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//bool vis[501][501];
//int m, n, K;
//int c;
//
//void dfs(int i, int j, int sum, vector<vector<int>>& vv)
//{
//	c++;
//	for (int k = 0; k < 4; k++)
//	{
//		int x = i + dx[k];
//		int y = j + dy[k];
//		if (x >= i && x < m && y >= j && y < n && !vis[x][y] && sum + vv[x][y] <= k)
//		{
//			vis[x][y] = true;
//			dfs(x, y, sum + vv[x][y], vv);
//			vis[x][y] = false;
//		}
//	}
//}
//
//int main()
//{
//	cin >> m >> n >> K;
//	vector<vector<int>> vv(m, vector<int>(n));
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> vv[i][j];
//		}
//	}
//
//	int sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (vv[i][j] <= k)
//			{
//				c = 0;
//				memset(vis, 0, sizeof(vis));
//				dfs(i, j, vv[i][j], vv);
//				sum += c;
//			}
//
//		}
//	}
//
//	cout << sum << endl;
//	return 0;
//}

int n, m;
int ret = 0;
int sum_n = 0;
int sum_m = 0;

void dfs()
{
	if (sum_n == n && sum_m == m)
	{
		ret++;
		return;
	}
	for (int i = 0; i < 2; i++)
	{
		if (i == 0 && sum_m < m) sum_m++;
		if (i == 1 && sum_n < n) sum_n++;
		dfs();
		if (i == 0 && sum_m > 0) sum_m--;
		if (i == 1 && sum_n > 0) sum_n--;


	}
}
int main()
{
	cin >> n >> m;
	dfs();

	cout << ret << endl;
	return 0;
}



