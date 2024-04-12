#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    long long int N = 0;
    cin >> N;
    vector<string> v(N);
    long long int count = 0;
    for (long long int i = 0; i < N; i++)
    {
        cin >> v[i];
        if (i > 0 && v[i].front() != v[i - 1].back())
        {
            count++;
            vector<string>::iterator it = find(v.begin(), v.end(), v[i]);
            it = v.erase(it);
        }
    }

    cout << count << endl;
    // 请在此输入您的代码
    return 0;
}