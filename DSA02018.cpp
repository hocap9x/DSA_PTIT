#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
bool ok;
vector<int> num(5);
int Calc(int x, int y, char sign)
{
    if (sign == '+')
        return x + y;
    if (sign == '-')
        return x - y;
    return x * y;
}
bool Check(vector<int> a, string sign)
{
    int m1 = Calc(a[0], a[1], sign[0]);
    int m2 = Calc(m1, a[2], sign[1]);
    int m3 = Calc(m2, a[3], sign[2]);
    int m4 = Calc(m3, a[4], sign[3]);
    return (m4 == 23);
}
void Try(string tmp, int cnt)
{
    if (cnt == 4)
    {
        if (Check(num, tmp))
            ok = true;
        return;
    }
    Try(tmp + "+", cnt + 1);
    Try(tmp + "-", cnt + 1);
    Try(tmp + "*", cnt + 1);
}
vector<int> Make(vector<int> pos, vector<int> a)
{
    vector<int> res;
    for (int i = 0; i < 5; i++)
        res.push_back(a[pos[i] - 1]);
    return res;
}
void Solve()
{
    ok = false;
    vector<int> a(5);
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    vector<int> pos(5);
    for (int i = 0; i < 5; i++)
        pos[i] = i + 1;
    do
    {
        num = Make(pos, a);
        Try("", 0);
    } while (next_permutation(pos.begin(), pos.end()));
    cout << (ok ? "YES\n" : "NO\n");
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Solve();
    }
    return 0;
}
