#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
struct Job
{
    int s, f;
};
bool cmp(Job a, Job b)
{
    return (a.f < b.f);
}
void Solve()
{
    int n;
    cin >> n;
    vector<Job> a(1005);
    for (int i = 0; i < n; i++)
        cin >> a[i].s;
    for (int i = 0; i < n; i++)
        cin >> a[i].f;
    sort(a.begin(), a.begin() + n, cmp);
    int ans = 1, end = a[0].f;
    for (int i = 1; i < n; i++)
    {
        if (a[i].s >= end)
        {
            ans++;
            end = a[i].f;
        }
        if (a[i].f < end)
            end = a[i].f;
    }
    cout << ans << "\n";
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
