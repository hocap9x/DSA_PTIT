#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, min_cost, ans;
int cost[15][15], x[15];
int cur_sum = 0;
bool vis[15];
int Same(string x, string y)
{
    map<char, int> cnt;
    for (auto c : y)
        cnt[c]++;
    int res = 0;
    for (auto c : x)
        res += (cnt[c] > 0);
    return res;
}
void Try(int k)
{
    if ((cur_sum + min_cost * (n - k)) >= ans)
        return;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            vis[i] = true;
            x[k] = i;
            if (k > 1)
                cur_sum += cost[x[k - 1]][i];
            if (k == n)
                ans = min(ans, cur_sum);
            else
                Try(k + 1);
            vis[i] = false;
            if (k > 1)
                cur_sum -= cost[x[k - 1]][i];
        }
    }
}
int main()
{
    cin >> n;
    vector<string> a(n);
    for (auto &x : a)
        cin >> x;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            cost[i + 1][j + 1] = cost[j + 1][i + 1] = Same(a[i], a[j]);
    }
    ans = min_cost = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != j)
                min_cost = min(min_cost, cost[i][j]);
        }
    }
    memset(vis, false, sizeof(vis));
    Try(1);
    cout << ans;
    return 0;
}
