// problem: https://codeforces.com/problemset/problem/276/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    vector<int> d(n + 1);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        d[l]++;
        d[r + 1]--;
    }

    for (int i = 1; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i];
        // cout << d[i] << " ";
    }
    sort(a.rbegin(), a.rend());
    sort(d.rbegin(), d.rend());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += 1LL * a[i] * d[i];
    }

    dekhao(ans);
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