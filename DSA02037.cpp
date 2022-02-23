#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n;
vector<int> x(20);
vector<vector<int>> ans;
bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
void Try(int idx, int start, int sum, vector<int> a)
{
    if (start == n)
        return;
    for (int i = start; i < n; i++)
    {
        x[idx] = a[i];
        sum += a[i];
        if (isPrime(sum))
            ans.push_back({x.begin(), x.begin() + idx + 1});
        Try(idx + 1, i + 1, sum, a);
        sum -= a[i];
    }
}
void Solve()
{
    ans.clear();
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.rbegin(), a.rend());
    Try(0, 0, 0, a);
    sort(ans.begin(), ans.end());
    for (int i = 0; i < (int)ans.size(); i++)
    {
        for (int j = 0; j < (int)ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << "\n";
    }
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
