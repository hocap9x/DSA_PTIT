#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Solve()
{
    ll p, q;
    cin >> p >> q;
    ll tmp;
    while (1)
    {
        if (q % p == 0)
        {
            cout << "1/" << q / p << "\n";
            break;
        }
        tmp = q / p + 1;
        cout << "1/" << tmp << " + ";
        p = p * tmp - q;
        q *= tmp;
    }
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
