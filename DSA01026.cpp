#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n;
bool Check(string s)
{
    if (s[0] != '8' || s.back() != '6' || s.find("88") != -1 || s.find("6666") != -1)
        return false;
    return true;
}
void Try(int idx, string s)
{
    if (idx == n)
    {
        if (Check(s))
            cout << s << "\n";
        return;
    }
    for (auto x : {"6", "8"})
        Try(idx + 1, s + x);
}
int main()
{
    cin >> n;
    Try(0, "");
    return 0;
}
