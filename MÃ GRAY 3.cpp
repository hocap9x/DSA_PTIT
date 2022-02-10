#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
string Binary_To_Gray(string s)
{
    string ans = "";
    ans += s[0];
    for (int i = 1; i < (int)s.size(); i++)
        ans += to_string((s[i] - '0') ^ (s[i - 1] - '0'));
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
        cout << Binary_To_Gray(s) << "\n";
    }
    return 0;
}
