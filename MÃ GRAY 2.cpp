#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
string Gray_To_Binary(string s)
{
    string ans = "";
    ans += s[0];
    for (int i = 1; i < (int)s.size(); i++)
        ans += to_string((ans.back() - '0') ^ (s[i] - '0'));
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << Gray_To_Binary(s) << "\n";
    }
    return 0;
}
