// problem: https://codeforces.com/problemset/problem/1627/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "-1\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << " "
#define pi pair<int, int>
using namespace std;

vector<vector<int>> adj;
vector<bool> vis;
map<pi, int> mp;

void dfs(int s, int w)
{
    vis[s] = true;
    for (int child : adj[s])
    {
        if (!vis[child])
        {
            mp[{s, child}] = w;
            mp[{child, s}] = w;
            if (w == 2)
                w = 3;
            else
                w = 2;
            dfs(child, w);
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    adj.assign(n + 1, vector<int>());
    mp.clear();
    vis.assign(n + 1, false);

    vector<pi> edge(n);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

        edge[i] = {u, v};
    }

    for (int i = 1; i <= n; i++)
    {
        if (adj[i].size() > 2)
        {
            no;
            return;
        }
    }
    dfs(1, 2);
    for (int i = 0; i < n - 1; i++)
        dekhao(mp[edge[i]]);
    cout << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}