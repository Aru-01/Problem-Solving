// problem: https://codeforces.com/contest/2055/problem/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

const int N = 1010;
void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    s += 'R';
    ll arr[N][N];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x = 1, y = 1;
    for (char c : s)
    {
        if (c == 'R')
        {
            for (int i = 1; i <= n; i++)
            {
                if (i == x)
                    continue;
                arr[x][y] -= arr[i][y];
            }
            y++;
        }
        else
        {
            for (int i = 1; i <= m; i++)
            {
                if (i == y)
                    continue;
                arr[x][y] -= arr[x][i];
            }
            x++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
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