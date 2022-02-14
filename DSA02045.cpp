#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n;
string s;
vector<string> ans;
void Try(int start, string tmp)
{
    if (start == n)
        return;
    for (int i = start; i < n; i++)
    {
        tmp += s[i];
        ans.push_back(tmp);
        Try(i + 1, tmp);
        tmp.pop_back();
    }
}
void Solve()
{
    ans.clear();
    cin >> n >> s;
    sort(s.begin(), s.end());
    Try(0, "");
    sort(ans.begin(), ans.end());
    for (auto x : ans)
        cout << x << " \n"[x == ans.back()];
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
