#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, k, arr[105], inc[105], ans = 0;
void Try(int idx, int start)
{
    if (idx > k)
        return;
    for (int i = start; i <= n; i++)
    {
        if (arr[i] > inc[idx - 1])
        {
            inc[idx] = arr[i];
            if (idx == k)
                ans++;
            Try(idx + 1, i + 1);
        }
    }
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    inc[0] = INT_MIN;
    Try(1, 1);
    cout << ans;
    return 0;
}
