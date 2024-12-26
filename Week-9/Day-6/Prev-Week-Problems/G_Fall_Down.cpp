// problem: https://codeforces.com/problemset/problem/1669/G
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    char grid[n][m], ans[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            ans[i][j] = '.';
        }
    }

    for (int i = 0; i < m; i++)
    {
        int cnt = 0;

        for (int j = 0; j < n; j++)
        {
            if (grid[j][i] == '*')
                cnt++;
            else if (grid[j][i] == 'o')
            {
                ans[j][i] = 'o';
                for (int k = 1; k <= cnt; k++)
                {
                    ans[j - k][i] = '*';
                }
                cnt = 0;
            }
        }
        if (cnt > 0)
        {
            for (int k = 1; k <= cnt; k++)
            {
                ans[n - k][i] = '*';
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j];
        }
        cout << '\n';
    }
    
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