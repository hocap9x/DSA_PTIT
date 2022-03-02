#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Solve()
{
    int s, d;
    cin >> s >> d;
    if (s > 9 * d)
    {
        cout << "-1\n";
        return;
    }
    vector<int> ans;
    while (s > 9)
    {
        ans.push_back(9);
        s -= 9;
        d--;
    }
    ans.push_back(s);
    d--;
    if (d > 0)
    {
        int cur = ans.back();
        ans.pop_back();
        ans.push_back(--cur);
        while (d > 1)
        {
            ans.push_back(0);
            d--;
        }
        ans.push_back(1);
    }
    for (int i = (int)ans.size() - 1; i >= 0; i--)
        cout << ans[i];
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
