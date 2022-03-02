#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Solve()
{
    string s;
    cin >> s;
    map<char, int> cnt;
    int n = s.size();
    int lim = (n + 1) / 2;
    for (auto x : s)
        cnt[x]++;
    for (auto x : cnt)
    {
        if (x.second > lim)
        {
            cout << "-1\n";
            return;
        }
    }
    cout << "1\n";
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
