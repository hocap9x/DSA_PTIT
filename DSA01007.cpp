#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, a[15];
void Out()
{
    for (int i = 1; i <= n; i++)
        cout << (a[i] == 1 ? 'B' : 'A');
    cout << " ";
}
void Try(int k)
{
    if (k > n)
        return;
    for (int i = 0; i < 2; i++)
    {
        a[k] = i;
        if (k == n)
            Out();
        else
            Try(k + 1);
    }
}
void Solve()
{
    cin >> n;
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
