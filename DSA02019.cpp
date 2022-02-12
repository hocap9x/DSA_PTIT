#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
vector<int> adj[25];
bool vis_edge[25][25];
int ans;
void Clear()
{
    for (int i = 0; i < 25; i++)
        adj[i].clear();
    memset(vis_edge, false, sizeof(vis_edge));
    ans = 0;
}
void DFS(int u, int step)
{
    for (auto x : adj[u])
    {
        if (!vis_edge[x][u] && !vis_edge[u][x])
        {
            vis_edge[x][u] = vis_edge[u][x] = true;
            ans = max(ans, step);
            DFS(x, step + 1);
            vis_edge[x][u] = vis_edge[u][x] = false;
        }
    }
}
void Solve()
{
    Clear();
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < n; i++)
        DFS(i, 1);
    cout << ans << "\n";
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
