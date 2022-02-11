#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Solve()
{
    int n, k;
    cin >> n >> k;
    int a[k + 1], b[k + 1];
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    int cnt = 0;
    int v[100] = {0};
    for (int i = k; i > 0; i--)
    {
        if (a[i] != n - k + i)
        {
            a[i]++;
            for (int j = i + 1; j <= k; j++)
                a[j] = a[j - 1] + 1;
            for (int i = 1; i <= k; i++)
                v[a[i]]++;
            for (int i = 1; i <= k; i++)
                cnt += (v[b[i]] == 0);
            cout << cnt << "\n";
            return;
        }
    }
    cout << k << "\n";
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
