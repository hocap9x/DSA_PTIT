#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
string Add_Zero(string s)
{
    return ("0" + s);
}
string Add_One(string s)
{
    return ("1" + s);
}
void Try(vector<string> &ans, int k, int n)
{
    if (k == n)
        return;
    vector<string> tmp1 = ans, tmp2(ans.rbegin(), ans.rend());
    transform(tmp1.begin(), tmp1.end(), tmp1.begin(), Add_Zero);
    transform(tmp2.begin(), tmp2.end(), tmp2.begin(), Add_One);
    int len = ans.size();
    ans.resize(2 * len);
    set_union(tmp1.begin(), tmp1.end(), tmp2.begin(), tmp2.end(), ans.begin());
    Try(ans, k + 1, n);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> ans;
        ans.push_back("0");
        ans.push_back("1");
        Try(ans, 1, n);
        for (auto x : ans)
            cout << x << " \n"[x == ans.back()];
    }
    return 0;
}
