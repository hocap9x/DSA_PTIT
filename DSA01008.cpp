#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, k, a[20];
void Out()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << "\n";
}
bool Check()
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        cnt += a[i];
    return cnt == k;
}
void Try(int k)
{
    if (k > n)
        return;
    for (int i = 0; i < 2; i++)
    {
        a[k] = i;
        if (k == n)
        {
            if (Check())
                Out();
        }
        else
            Try(k + 1);
    }
}
void Solve()
{
    cin >> n >> k;
    Try(1);
    cout << "\n";
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
