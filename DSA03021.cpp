#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &c : a)
        cin >> c;
    int mn = *min_element(a.begin(), a.end());
    int ans = INT_MAX;
    for (int i = 1; i <= mn; i++) // i ứng với a[i] / b[i] = a[i + 1] / b[i + 1] = ... = i
    {
        int x = 0;
        bool ok = true;
        for (int j = 0; j < n; j++)
        {
            double temp1 = a[j] * 1.0 / i;
            double temp2 = a[j] * 1.0 / (i + 1);
            int temp = (int)temp2 + 1;
            if (temp <= temp1)
                x += temp;
            else
            {
                ok = false;
                break;
            }
        }
        if (ok)
            ans = min(ans, x);
    }
    cout << ans;
    return 0;
}
