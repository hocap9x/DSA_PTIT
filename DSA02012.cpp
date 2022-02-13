#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
ll n, m;
bool canVisit(ll i, ll j)
{
    return (i > 0 && j > 0 && i <= n && j <= m);
}
ll Count(ll i, ll j)
{
    if (!canVisit(i, j))
        return 0;
    if (i == n && j == m)
        return 1;
    return (Count(i + 1, j) + Count(i, j + 1));
}
void Solve()
{
    cin >> n >> m;
    for (ll i = 1; i <= n * m; i++)
    {
        ll x;
        cin >> x;
    }
    ll ans = Count(1, 1);
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
