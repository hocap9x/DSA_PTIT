#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Solve()
{
    int test;
    string s;
    cin >> test >> s;
    if (!next_permutation(s.begin(), s.end()))
        cout << test << " BIGGEST\n";
    else
        cout << test << " " << s << "\n";
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
