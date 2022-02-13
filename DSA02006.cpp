#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, k;
vector<vector<int>> ans;
void Print(vector<int> v)
{
    int n = v.size();
    cout << "[";
    for (int i = 0; i < n; i++)
        cout << v[i] << " ]"[i == n - 1];
    cout << " ";
}
void Try(vector<int> a, vector<int> &x, int idx, int start, int sum)
{
    if (start == n || sum > k)
        return;
    for (int i = start; i < n; i++)
    {
        x[idx] = a[i];
        sum += a[i];
        if (sum == k)
            ans.push_back({x.begin(), x.begin() + idx + 1});
        Try(a, x, idx + 1, i + 1, sum);
        sum -= a[i];
    }
}
void Solve()
{
    ans.clear();
    cin >> n >> k;
    vector<int> a(n), x(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    Try(a, x, 0, 0, 0);
    if (ans.size() == 0)
        cout << -1 << "\n";
    else
    {
        for (int i = 0; i < ans.size(); i++)
            Print(ans[i]);
        cout << "\n";
    }
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
