#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Solve()
{
    int n, k;
    cin >> n >> k;
    string s(n, '0'), str(n, '0');
    for (int i = 0; i < k; i++)
        str[i] = '1';
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        s[--x] = '1';
    }
    int res = 0;
    do
    {
        res++;
        if (str == s)
            break;
    } while (prev_permutation(str.begin(), str.end()));
    cout << res << "\n";
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
