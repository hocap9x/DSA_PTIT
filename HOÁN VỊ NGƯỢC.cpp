#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Out(vector<int> a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << " ";
}
void Solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        a[i] = i + 1;
    vector<vector<int>> ans;
    do
    {
        ans.push_back(a);
    } while (next_permutation(a.begin(), a.end()));
    for (int i = ans.size() - 1; i >= 0; i--)
        Out(ans[i], n);
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
