#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, k, a[20], sum, ans;
void Try(int start, int cnt, int s)
{
    if (start > n)
        return;
    for (int i = start; i <= n; i++)
    {
        s += a[i];
        if (s == sum)
        {
            if (cnt == k && i == n)
                ans++;
            Try(i + 1, cnt + 1, 0);
        }
    }
}
int main()
{
    cin >> n >> k;
    sum = 0;
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (abs(sum) % k != 0)
    {
        cout << 0;
        return 0;
    }
    sum /= k;
    Try(1, 1, 0);
    cout << ans;
    return 0;
}
