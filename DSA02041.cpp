#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
struct Data
{
    int num, cnt;
};
void Solve()
{
    int n;
    cin >> n;
    unordered_set<int> s;
    queue<Data> q;
    q.push({n, 0});
    s.insert(n);
    while (!q.empty())
    {
        Data tmp = q.front();
        q.pop();
        if (tmp.num == 1)
        {
            cout << tmp.cnt << "\n";
            return;
        }
        if (s.find(tmp.num - 1) == s.end())
        {
            q.push({tmp.num - 1, tmp.cnt + 1});
            s.insert(tmp.num - 1);
        }
        if (tmp.num % 2 == 0 && s.find(tmp.num / 2) == s.end())
        {
            q.push({tmp.num / 2, tmp.cnt + 1});
            s.insert(tmp.num / 2);
        }
        if (tmp.num % 3 == 0 && s.find(tmp.num / 3) == s.end())
        {
            q.push({tmp.num / 3, tmp.cnt + 1});
            s.insert(tmp.num / 3);
        }
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
