#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, k;
int x[20];
set<string> diff;
string Make(vector<string> a)
{
    string res = "";
    for (int i = 1; i <= k; i++)
        res += (a[x[i] - 1] + " ");
    res.pop_back();
    return res;
}
void Try(vector<string> a, int idx)
{
    if (idx > k)
        return;
    for (int i = x[idx - 1] + 1; i <= n - k + idx; i++)
    {
        x[idx] = i;
        if (idx == k)
            diff.insert(Make(a));
        else
            Try(a, idx + 1);
    }
}
int main()
{
    cin >> n >> k;
    vector<string> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    vector<string>::iterator itr;
    itr = unique(a.begin(), a.end());
    a.resize(distance(a.begin(), itr));
    n = a.size();
    Try(a, 1);
    for (auto x : diff)
        cout << x << "\n";
    return 0;
}
