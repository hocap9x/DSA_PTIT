#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int Calc(int n, int s, int m)
{
    if (n < m || 6 * (n - m) < m)
        return -1;
    return ceil((s * m) * 1.0 / n);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, m;
        cin >> n >> s >> m;
        cout << Calc(n, s, m) << "\n";
    }
    return 0;
}
