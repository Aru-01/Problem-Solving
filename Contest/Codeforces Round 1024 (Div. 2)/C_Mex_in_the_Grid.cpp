// problem: https://codeforces.com/contest/2102/problem/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << " "
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> g(n, vector<int>(n));
    int val = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            g[i][j] = val++;
        }
    }

    for (auto i : g)
    {
        for (auto j : i)
            dekhao(j);
        cout << "\n";
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