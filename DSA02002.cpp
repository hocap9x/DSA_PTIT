#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
vector<vector<int>> ans;
void Print(vector<int> a)
{
    int n = a.size();
    cout << "[";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ]"[i == n - 1];
    cout << " ";
}
void Try(vector<int> a, int n)
{
    if (n == 1)
    {
        ans.push_back(a);
        return;
    }
    ans.push_back(a);
    vector<int> tmp(n - 1);
    for (int i = 0; i < n - 1; i++)
        tmp[i] = a[i] + a[i + 1];
    return Try(tmp, n - 1);
}
void Solve()
{
    ans.clear();
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    Try(a, n);
    for (int i = ans.size() - 1; i >= 0; i--)
        Print(ans[i]);
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
