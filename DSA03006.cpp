#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    vector<int> b = a;
    sort(b.begin(), b.end());
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] > a[r])
            swap(a[l], a[r]);
        l++, r--;
    }
    cout << (a == b ? "Yes\n" : "No\n");
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
