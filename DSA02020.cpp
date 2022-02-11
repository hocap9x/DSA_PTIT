#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
ll res = 10e17, N, p[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
void Try(ll w, ll n, ll v)
{
    if (w > 9 || v > N)
        return;
    if (v == N && res > n)
        res = n;
    for (int i = 2; i < 99; i++)
    {
        n *= p[w];
        if (n > res)
            break;
        Try(w + 1, n, v * i);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> N;
        Try(0, 1, 1);
        cout << res << "\n";
        res = 10e17;
    }
    return 0;
}
