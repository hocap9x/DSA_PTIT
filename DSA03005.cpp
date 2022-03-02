#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    int sum = accumulate(a.begin(), a.end(), 0);
    int need = max(k, n - k), i = n - 1, big = 0;
    while (need--)
        big += a[i--];
    cout << abs(sum - 2 * big) << "\n";
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
