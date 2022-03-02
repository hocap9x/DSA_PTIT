#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Solve()
{
    int n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        pq.push(x);
    }
    ll ans = 0;
    while (pq.size() > 1)
    {
        ll tmp1 = pq.top();
        pq.pop();
        ll tmp2 = pq.top();
        pq.pop();
        ans += (tmp1 + tmp2);
        pq.push(tmp1 + tmp2);
    }
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
