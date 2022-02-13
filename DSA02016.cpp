#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, val[20][20], x[20], ans;
bool xuoi[20], nguoc[20], vis[20];
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (vis[j] && xuoi[i - j + n] && nguoc[i + j - 1])
        {
            x[i] = j;
            vis[j] = false;
            xuoi[i - j + n] = false;
            nguoc[i + j - 1] = false;
            if (i == n)
                ans++;
            else
                Try(i + 1);
            vis[j] = true;
            xuoi[i - j + n] = true;
            nguoc[i + j - 1] = true;
        }
    }
}
void Solve()
{
    memset(vis, true, sizeof(vis));
    memset(xuoi, true, sizeof(xuoi));
    memset(nguoc, true, sizeof(nguoc));
    cin >> n;
    ans = 0;
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
