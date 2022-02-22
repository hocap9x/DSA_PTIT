#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
bool Check(string s)
{
    for (int i = 1; i < s.size(); i++)
    {
        int dig1 = s[i] - '0', dig2 = s[i - 1] - '0';
        if (abs(dig1 - dig2) == 1)
            return false;
    }
    return true;
}
void Solve()
{
    int n;
    cin >> n;
    string s = "";
    for (int i = 1; i <= n; i++)
        s += to_string(i);
    do
    {
        if (Check(s))
            cout << s << "\n";
    } while (next_permutation(s.begin(), s.end()));
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
