#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    ll num1 = 0, num2 = 0;
    for (ll i = 0; i < n; i += 2)
        num1 = num1 * 10 + a[i];
    for (ll i = 1; i < n; i += 2)
        num2 = num2 * 10 + a[i];
    ll ans = num1 + num2;
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
