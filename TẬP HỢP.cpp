#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, k, s, ans;
void Try(int idx, int start, int sum)
{
    if (sum > s || idx > k)
        return;
    for (int i = start; i <= n; i++)
    {
        int new_idx = idx + 1, new_sum = sum + i;
        if (new_idx == k)
        {
            if (new_sum == s)
                ans++;
        }
        else
            Try(idx + 1, i + 1, new_sum);
    }
}
int main()
{
    while (1)
    {
        cin >> n >> k >> s;
        if (n == 0 && k == 0 && s == 0)
            break;
        ans = 0;
        Try(0, 1, 0);
        cout << ans << "\n";
    }
    return 0;
}
