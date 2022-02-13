#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int val[10][10], x[10], ans;
bool xuoi[20], nguoc[20], vis[10];
int Calc()
{
    int res = 0;
    for (int i = 1; i <= 8; i++)
        res += val[i][x[i]];
    return res;
}
void Try(int i)
{
    for (int j = 1; j <= 8; j++)
    {
        if (vis[j] && xuoi[i - j + 8] && nguoc[i + j - 1])
        {
            x[i] = j;
            vis[j] = false;
            xuoi[i - j + 8] = false;
            nguoc[i + j - 1] = false;
            if (i == 8)
                ans = max(ans, Calc());
            else
                Try(i + 1);
            vis[j] = true;
            xuoi[i - j + 8] = true;
            nguoc[i + j - 1] = true;
        }
    }
}
void Solve()
{
    memset(vis, true, sizeof(vis));
    memset(xuoi, true, sizeof(xuoi));
    memset(nguoc, true, sizeof(nguoc));
    ans = -1;
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
            cin >> val[i][j];
    }
    Try(1);
    cout << ans << "\n";
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
