// problem: https://codeforces.com/problemset/problem/580/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

int n, m, ans;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> cat;

void dfs(int src, int cur)
{
    vis[src] = true;
    if (cur > m)
        return;

    bool ok = true;
    for (auto child : adj[src])
    {
        if (!vis[child])
        {
            dfs(child, cur * cat[child] + cat[child]);
            ok = false;
        }
    }

    if (ok)
        ans++;
}
void solve()
{

    cin >> n >> m;

    adj.resize(n + 1);
    cat.resize(n + 1);
    vis.resize(n + 1, false);

    for (int i = 1; i <= n; i++)
        cin >> cat[i];

    for (int i = 1; i <= n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, cat[1]);
    dekhao(ans);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
        solve();
    return 0;
}