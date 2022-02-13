#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, a[25], x[25];
vector<string> ans;
string Make(int len)
{
    string res = "";
    for (int i = 1; i <= len; i++)
        res += (to_string(x[i]) + " ");
    res.pop_back();
    return res;
}
void Try(int start, int idx)
{
    for (int i = start; i <= n; i++)
    {
        if (a[i] > x[idx - 1])
        {
            x[idx] = a[i];
            if (idx > 1)
                ans.push_back(Make(idx));
            Try(i + 1, idx + 1);
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try(1, 1);
    sort(ans.begin(), ans.end());
    for (auto x : ans)
        cout << x << "\n";
    return 0;
}
