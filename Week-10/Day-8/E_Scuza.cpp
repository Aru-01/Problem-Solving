// problem: https://codeforces.com/problemset/problem/1742/E
#include <bits/stdc++.h>
#define ll long long
#define no cout << "0 "
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<ll> pre(n + 1), a(n + 1);
    pre[0] = 0;
    a[0] = 0;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        pre[i + 1] = pre[i] + x;
        a[i + 1] = max(a[i], x);
    }
    while (q--)
    {
        int k;
        cin >> k;

        auto idx = upper_bound(a.begin(), a.end(), k) - a.begin();

        cout << pre[idx - 1] << ' ';
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