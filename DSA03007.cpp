#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
ll Min(ll n, vector<ll> a, vector<ll> b)
{
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    ll res = 0;
    for (ll i = 0; i < n; i++)
        res += (a[i] * b[i]);
    return res;
}
void Solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;
    cout << min(Min(n, a, b), Min(n, b, a)) << "\n";
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
