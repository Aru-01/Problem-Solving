// problem: https://codeforces.com/problemset/problem/1517/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << " "
using namespace std;

int n, val;
vector<vector<int>> g, vis;
vector<pair<int, int>> d = {{0, -1}, {1, 0}};

bool is_valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < n);
}

void dfs(int si, int sj)
{
    vis[si][sj] = 1;
    for (int i = 0; i < 2; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (is_valid(ci, cj) && g[ci][cj] == -1 && val > 0)
        {
            g[ci][cj] = g[si][sj];
            val--;
            dfs(ci, cj);
        }
    }
}

void solve()
{
    cin >> n;

    g.assign(n, vector<int>(n, -1));
    vis.assign(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        cin >> g[i][i];
        val = g[i][i] - 1;
        dfs(i, i);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            dekhao(g[i][j]);
        cout << "\n";
    }
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