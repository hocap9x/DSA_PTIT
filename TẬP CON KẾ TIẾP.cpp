#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Solve()
{
    int n, k;
    cin >> n >> k;
    int a[k + 1];
    for (int i = 1; i <= k; i++)
        cin >> a[i];
    for (int i = k; i > 0; i--)
    {
        if (a[i] != n - k + i)
        {
            a[i]++;
            for (int j = i + 1; j <= k; j++)
                a[j] = a[j - 1] + 1;
            for (int j = 1; j <= k; j++)
                cout << a[j] << " \n"[j == k];
            return;
        }
    }
    for (int i = 1; i <= k; i++)
        cout << i << " \n"[i == k];
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
