// problem: https://codeforces.com/problemset/problem/982/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "-1\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

const int N = 1e5 + 7;
vector<int> adj[N];
bool vis[N];
int sz[N], keep[N], ans;

void dfs(int v)
{
    vis[v] = true;
    for (int i = 0; i < adj[v].size(); i++)
    {
        int u = adj[v][i];
        if (!vis[u])
        {
            dfs(u);
            sz[v] += keep[u];
        }
    }
    if (sz[v] % 2 == 0)
        keep[v] = sz[v] + 1;
    else
        ans += sz[v];
    return;
}

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    if (n % 2)
    {
        no;
        return;
    }
    dfs(0);
    dekhao(n - ans - 1);
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