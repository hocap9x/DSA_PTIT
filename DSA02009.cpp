#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, k;
bool Check(vector<int> a, vector<bool> &vis, int start, int cur_sum, int sum_target, int part)
{
    if (cur_sum == sum_target)
    {
        if (part == k)
            return true;
        return Check(a, vis, 0, 0, sum_target, part + 1);
    }
    for (int i = start; i < n; i++)
    {
        if (vis[i])
            continue;
        int tmp_sum = cur_sum + a[i];
        if (tmp_sum <= sum_target)
        {
            vis[i] = true;
            cur_sum += a[i];
            bool ok = Check(a, vis, i + 1, cur_sum, sum_target, part);
            vis[i] = false;
            cur_sum -= a[i];
            if (ok)
                return true;
        }
    }
    return false;
}
void Solve()
{
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    int sum_target = accumulate(a.begin(), a.end(), 0);
    if (sum_target % k != 0)
    {
        cout << 0 << "\n";
        return;
    }
    sum_target /= k;
    vector<bool> vis(n, false);
    cout << (Check(a, vis, 0, 0, sum_target, 1) ? 1 : 0) << "\n";
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
