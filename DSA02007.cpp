#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
string res;
void Try(int k, string s, int start)
{
    if (k == 0 || start == s.size())
        return;
    char c = s[start];
    for (int i = start + 1; i < s.size(); i++)
        c = max(c, s[i]);
    k -= (c != s[start] ? 1 : 0);
    for (int i = s.size() - 1; i >= start; i--)
    {
        if (s[i] == c)
        {
            swap(s[start], s[i]);
            res = max(res, s);
            Try(k, s, start + 1);
            swap(s[start], s[i]);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        string s;
        cin >> k >> s;
        res = s;
        Try(k, s, 0);
        cout << res << "\n";
    }
    return 0;
}
