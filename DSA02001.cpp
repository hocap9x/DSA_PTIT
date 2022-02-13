#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Print(vector<int> a, int n)
{
    cout << "[";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ]"[i == n - 1];
    cout << "\n";
}
void Try(vector<int> a, int n)
{
    if (n == 1)
    {
        Print(a, n);
        return;
    }
    Print(a, n);
    vector<int> tmp(n - 1);
    for (int i = 0; i < n - 1; i++)
        tmp[i] = a[i] + a[i + 1];
    return Try(tmp, n - 1);
}
void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    Try(a, n);
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
