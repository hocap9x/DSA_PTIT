#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long;
vector<vector<int>> ans;
vector<int> a(15);
int n;
void Try(int k, int start, int sum)
{
    if (sum > n)
        return;
    for (int i = start; i > 0; i--)
    {
        a[k] = i;
        int new_sum = sum + i;
        if (new_sum == n)
        {
            vector<int> tmp(a.begin(), a.begin() + k + 1);
            ans.push_back(tmp);
        }
        Try(k + 1, i, new_sum);
    }
}
void Out(vector<int> v)
{
    cout << "(";
    int len = v.size();
    for (int i = 0; i < len; i++)
        cout << v[i] << " )"[i == len - 1];
    cout << " ";
}
void Solve()
{
    cin >> n;
    ans.clear();
    Try(0, n, 0);
    cout << ans.size() << "\n";
    for (int i = 0; i < (int)ans.size(); i++)
        Out(ans[i]);
    cout << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}
