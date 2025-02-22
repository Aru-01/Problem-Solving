// problem: https://codeforces.com/problemset/problem/1829/E
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

const int N = 1005;
int n, m;

int g[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
ll depth;

bool valid(int i, int j)
{
    if (i < 0 or i >= n or j < 0 or j >= m)
        return false;
    return true;
}

void dfs(int i, int j)
{
    depth += g[i][j];
    vis[i][j] = true;
    for (auto [x, y] : d)
    {
        int ci = i + x;
        int cj = j + y;
        if (valid(ci, cj) && !vis[ci][cj] && g[ci][cj] != 0)
            dfs(ci, cj);
        }
}

void solve()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> g[i][j];
        }
    }
    memset(vis, false, sizeof(vis));

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && g[i][j] != 0)
            {
                depth = 0;
                dfs(i, j);
                ans = max(ans, depth);
            }
        }
    }
    dekhao(ans);
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