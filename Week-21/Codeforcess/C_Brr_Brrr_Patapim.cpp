#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> G(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> G[i][j];
        }
    }

    vector<int> per(2 * n + 1, 0);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; j++)
        {
            int k = i + j + 2;
            if (per[k] == 0)
            {
                per[k] = G[i][j];
            }
        }
    }

    vector<bool> vis(2 * n + 1, false);

    for (int i = 2; i <= 2 * n; i++)
    {
        if (per[i] != 0)
        {
            vis[per[i]] = true;
        }
    }

    int x = 0;
    for (int i = 1; i <= 2 * n; i++)
    {
        if (!vis[i])
        {
            x = i;
            break;
        }
    }
    per[1] = x;

    for (int i = 1; i <= 2 * n; i++)
        cout << per[i] << " ";

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
