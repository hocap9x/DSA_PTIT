#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
struct Data
{
    string num;
    int mod;
};
void Solve()
{
    int n;
    cin >> n;
    queue<Data> q;
    q.push({"9", 9 % n});
    while (!q.empty())
    {
        Data tmp = q.front();
        q.pop();
        if (tmp.mod == 0)
        {
            cout << tmp.num << "\n";
            return;
        }
        Data n1 = tmp, n2 = tmp;
        n1.num += "0";
        n2.num += "9";
        n1.mod = (tmp.mod * 10 + 0) % n;
        n2.mod = (tmp.mod * 10 + 9) % n;
        q.push(n1);
        q.push(n2);
    }
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
