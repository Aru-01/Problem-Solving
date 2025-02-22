// problem: https://codeforces.com/problemset/problem/1843/D
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

const int N = 2e5 + 7;

vector<vector<int>> adj;
vector<ll> d;

void dfs(int cur, int parent)
{
    if (cur > 1 && adj[cur].size() == 1)
    {
        d[cur] = 1;
        return;
    }
    for (auto i : adj[cur])
    {
        if (i == parent)
            continue;
        dfs(i, cur);
        d[cur] += d[i];
    }
}
void solve()
{
    int n;
    cin >> n;

    adj.assign(n + 1, vector<int>());
    d.assign(n + 1, 0);
    
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 1);
    
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;

        dekhao((ll)d[x] * d[y]);
    }
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