#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    vector<int> b = a;
    sort(b.begin(), b.end());
    int cnt = 0;
    do
    {
        cnt++;
        if (b == a)
            break;
    } while (next_permutation(b.begin(), b.end()));
    cout << cnt << "\n";
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
