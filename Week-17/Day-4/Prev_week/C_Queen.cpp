// problem: https://codeforces.com/problemset/problem/1143/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "-1\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << " "
using namespace std;

void solve()
{
    int n, root;
    cin >> n;

    vector<int> g[n + 1], bad(n + 1), a(n + 1), ans;
    for (int i = 1; i <= n; i++)
    {
        int p, c;
        cin >> p >> c;
        int u = p, v = i;
        if (p != -1)
            g[u].push_back(v);
        else
            root = i;

        if (c == 1)
        {
            bad[u]++;
            a[v] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (i == root)
            continue;
        if (g[i].size() == bad[i] && a[i] == 1)
        {
            ans.push_back(i);
        }
    }

    if (ans.empty())
        no;
    else
    {
        for (int i : ans)
            dekhao(i);
        cout << '\n';
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