#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, k, arr[105], a[105];
vector<vector<int>> ans;
void Try(int idx, int start, int sum)
{
    for (int i = n; i >= start; i--)
    {
        a[idx] = arr[i];
        int new_sum = sum + arr[i];
        if (new_sum == k)
        {
            vector<int> tmp;
            for (int j = 1; j <= idx; j++)
                tmp.push_back(a[j]);
            ans.push_back(tmp);
        }
        Try(idx + 1, i + 1, new_sum);
    }
}
void Out(vector<int> v)
{
    for (auto x : v)
        cout << x << " ";
    cout << "\n";
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    Try(1, 1, 0);
    for (int i = 0; i < (int)ans.size(); i++)
        Out(ans[i]);
    cout << ans.size();
    return 0;
}
