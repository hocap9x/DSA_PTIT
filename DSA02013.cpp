#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
vector<string> ans;
bool isPrime[250];
int n, p, s, x[15];
void Sieve()
{
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= 250 / 2; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j < 250; j += i)
                isPrime[j] = false;
        }
    }
}
string Make()
{
    string res = "";
    for (int i = 1; i <= n; i++)
        res += (to_string(x[i]) + " ");
    res.pop_back();
    return res;
}
void Try(int idx, int start, int sum)
{
    if (idx > n || sum > s)
        return;
    for (int i = start; i < 250; i++)
    {
        if (isPrime[i])
        {
            x[idx] = i;
            sum += i;
            if (idx == n && sum == s)
                ans.push_back(Make());
            Try(idx + 1, i + 1, sum);
            sum -= i;
        }
    }
}
void Solve()
{
    ans.clear();
    cin >> n >> p >> s;
    Try(1, p + 1, 0);
    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (auto x : ans)
        cout << x << "\n";
}
int main()
{
    Sieve();
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}
