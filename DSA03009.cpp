#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
struct Task
{
    int id, deadline, profit;
};
bool cmp(Task a, Task b)
{
    return (a.profit > b.profit);
}
void Solve()
{
    int n;
    cin >> n;
    vector<Task> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i].id >> a[i].deadline >> a[i].profit;
    sort(a.begin(), a.end(), cmp);
    int cnt = 0, prof = 0;
    vector<bool> vis(1005, false);
    for (int i = 0; i < n; i++)
    {
        while (vis[a[i].deadline] && a[i].deadline > 0)
            a[i].deadline--;
        if (a[i].deadline > 0)
        {
            cnt++;
            prof += a[i].profit;
            vis[a[i].deadline] = true;
        }
    }
    cout << cnt << " " << prof << "\n";
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
