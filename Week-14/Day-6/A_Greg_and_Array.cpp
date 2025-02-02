// problem: https://codeforces.com/problemset/problem/295/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << " "
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    vector<array<ll, 3>> op(m + 1);
    for (int i = 1; i <= m; i++)
    {
        cin >> op[i][0] >> op[i][1] >> op[i][2];
    }

    vector<ll> d(m + 2, 0), pre(n + 2, 0);
    while (k--)
    {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }

    for (int i = 1; i <= m; i++)
    {
        d[i] += d[i - 1];
        op[i][2] *= d[i];

        pre[op[i][0]] += op[i][2];
        pre[op[i][1] + 1] -= op[i][2];
    }

    for (int i = 1; i <= n; i++)
    {
        pre[i] += pre[i - 1];
        dekhao(a[i] + pre[i]);
    }
    cout << '\n';
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