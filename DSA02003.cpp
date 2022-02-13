#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, a[15][15];
vector<string> ans;
bool canVisit(int i, int j)
{
    return (i > 0 && i <= n && j > 0 && j <= n && a[i][j]);
}
void Try(int i, int j, string tmp)
{
    if (i == n && j == n)
    {
        ans.push_back(tmp);
        return;
    }
    if (canVisit(i + 1, j))
        Try(i + 1, j, tmp + "D");
    if (canVisit(i, j + 1))
        Try(i, j + 1, tmp + "R");
}
void Solve()
{
    ans.clear();
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    if (a[1][1] == 0 || a[n][n] == 0)
    {
        cout << -1 << "\n";
        return;
    }
    Try(1, 1, "");
    if (ans.size() == 0)
        cout << -1 << "\n";
    else
    {
        sort(ans.begin(), ans.end());
        for (auto x : ans)
            cout << x << " \n"[x == ans.back()];
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
