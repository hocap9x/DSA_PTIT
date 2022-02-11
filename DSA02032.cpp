#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long;
vector<vector<int>> ans;
vector<int> a(105), arr(25);
int n, x;
void Try(int k, int start, int sum)
{
    if (start >= n || sum > x)
        return;
    for (int i = start; i < n; i++)
    {
        a[k] = arr[i];
        int new_sum = sum + arr[i];
        if (new_sum == x)
            ans.push_back({a.begin(), a.begin() + k + 1});
        Try(k + 1, i, new_sum);
    }
}
void Out(vector<int> v)
{
    cout << "{";
    int len = v.size();
    for (int i = 0; i < len; i++)
        cout << v[i] << " }"[i == len - 1];
    cout << " ";
}
void Solve()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.begin() + n);
    ans.clear();
    Try(0, 0, 0);
    if (ans.size() == 0)
    {
        cout << "-1\n";
        return;
    }
    cout << ans.size() << " ";
    for (int i = 0; i < (int)ans.size(); i++)
        Out(ans[i]);
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
