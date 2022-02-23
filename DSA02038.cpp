#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    string s(n, '0');
    for (int i = 0; i < k; i++)
        s[i] = '1';
    do
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                cout << a[i] << " ";
        }
        cout << "\n";
    } while (prev_permutation(s.begin(), s.end()));
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
