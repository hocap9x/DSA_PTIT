#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
vector<int> a = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
void Solve()
{
    int n;
    cin >> n;
    int res = 0;
    for (int i = 9; i >= 0; i--)
    {
        int d = n / a[i];
        res += d;
        n -= (d * a[i]);
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
