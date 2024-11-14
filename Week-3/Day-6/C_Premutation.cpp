// problem: https://codeforces.com/problemset/problem/1790/C

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> a(n + 5, vector<int>(n));

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        // cout << a[3][n - 1];
        map<int, int> mp1, mp2;

        for (int i = 1; i <= n; i++)
        {
            mp1[a[i][n - 1]] = i;
            mp2[a[i][n - 1]]++;
        }
        int idx, val;
        for (auto [x, y] : mp2)
        {
            // cout << x << "->" << y << "\n";
            if (y == 1)
                idx = x;
            else
                val = x;
        }
        // cout << mp1[idx];
        for (int i = 1; i < n; i++)
        {
            cout << a[mp1[idx]][i] << " ";
        }
        cout << val << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}