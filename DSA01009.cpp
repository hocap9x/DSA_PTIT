#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, k, a[20];
vector<string> ans;
string Make()
{
    string s;
    for (int i = 1; i <= n; i++)
        s += (a[i] == 0 ? "A" : "B");
    return s;
}
bool Check(string s)
{
    int cnt = 0;
    string res;
    for (int i = 1; i <= k; i++)
        res += "A";
    for (int i = 0; i <= n - k; i++)
        cnt += (s.substr(i, k) == res);
    return (cnt == 1);
}
void Try(int k)
{
    if (k > n)
        return;
    for (int i = 0; i < 2; i++)
    {
        a[k] = i;
        if (k == n)
        {
            string s = Make();
            if (Check(s))
                ans.push_back(s);
        }
        else
            Try(k + 1);
    }
}
int main()
{
    cin >> n >> k;
    Try(1);
    cout << ans.size() << "\n";
    for (auto x : ans)
        cout << x << "\n";
    return 0;
}
