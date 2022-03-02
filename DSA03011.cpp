#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
const ll MOD = 1e9 + 7;
void Solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &c : a)
        cin >> c;
    priority_queue<ll, vector<ll>, greater<ll>> q(a.begin(), a.end());
    ll res = 0;
    while (q.size() > 1)
    {
        ll first = q.top();
        q.pop();
        ll second = q.top();
        q.pop();
        res += (first % MOD + second % MOD) % MOD;
        res %= MOD;
        q.push((first % MOD + second % MOD) % MOD);
    }
    cout << res << "\n";
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
