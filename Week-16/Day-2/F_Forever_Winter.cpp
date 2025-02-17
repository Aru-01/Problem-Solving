// problem: https://codeforces.com/problemset/problem/1829/F
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(i, j) cout << i << " " << j << "\n"
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    map<int, set<int>> g;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].insert(v);
        g[v].insert(u);
    }

    int leaf = -1, x, y;
    for (int i = 1; i <= n; i++)
    {
        if (g[i].size() == 1)
        {
            leaf = i;
            break;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (g[i].find(leaf) != g[i].end())
        {
            y = g[i].size() - 1;
            leaf = i;
            break;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (g[i].find(leaf) != g[i].end() && g[i].size() > 1)
        {
            x = g[i].size();
            break;
        }
    }

    dekhao(x, y);
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