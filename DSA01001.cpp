#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Solve()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            s[i] = '1';
            for (int j = i + 1; j < n; j++)
                s[j] = '0';
            cout << s << "\n";
            return;
        }
    }
    for (int i = 0; i < n + 1; i++)
        cout << 0;
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
