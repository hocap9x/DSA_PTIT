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
        if (s[i] == '1')
        {
            s[i] = '0';
            for (int j = i + 1; j < n; j++)
                s[j] = '1';
            cout << s << "\n";
            return;
        }
    }
    for (int i = 0; i < n; i++)
        cout << 1;
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
