#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, a[20];
void Out()
{
    for (int i = 1; i <= n; i++)
        cout << (a[i] ? 'H' : 'A');
    cout << "\n";
}
bool Check()
{
    if (a[1] == 0 || a[n] == 1)
        return false;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == 1 && a[i - 1] == 1)
            return false;
    }
    return true;
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
    cin >> n;
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
