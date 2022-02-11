#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, a[1000];
void Out(int k)
{
    cout << "(";
    for (int i = 1; i <= k; i++)
        cout << a[i] << " )"[i == k];
    cout << " ";
}
void Try(int start, int k, int sum)
{
    if (sum > n)
        return;
    for (int i = start; i > 0; i--)
    {
        a[k] = i;
        int new_sum = sum + i;
        if (new_sum == n)
            Out(k);
        Try(i, k + 1, new_sum);
    }
}
void Solve()
{
    cin >> n;
    Try(n, 1, 0);
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
