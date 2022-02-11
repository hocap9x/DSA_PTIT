#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<bool> exist(n + 1, false);
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        exist[x] = true;
    }
    string s;
    for (int i = 1; i <= n; i++)
        s += to_string(exist[i]);
    next_permutation(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            cout << i + 1 << " ";
    }
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
