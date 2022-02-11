#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, k, a[20];
void Try(int x)
{
    if (x > k)
        return;
    for (int i = a[x - 1] + 1; i <= n - k + x; i++)
    {
        a[x] = i;
        if (x == k)
        {
            for (int j = 1; j <= k; j++)
                cout << char(a[j] + 64);
            cout << "\n";
        }
        else
            Try(x + 1);
    }
}
void Solve()
{
    cin >> n >> k;
    Try(1);
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
