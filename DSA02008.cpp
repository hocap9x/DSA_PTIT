#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
void Out(vector<int> a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " \n"[i == n - 1];
}
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    vector<int> per(n);
    for (int i = 0; i < n; i++)
        per[i] = i + 1;
    vector<vector<int>> ans;
    do
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += a[i + 1][per[i]];
        if (sum == k)
            ans.push_back(per);
    } while (next_permutation(per.begin(), per.end()));
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
        Out(ans[i], n);
    return 0;
}
