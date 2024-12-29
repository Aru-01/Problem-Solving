// problem: https://codeforces.com/problemset/problem/1780/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int &i : a)
        cin >> i;

    vector<ll> pre(n), suf(n);
    pre[0] = a[0];
    suf[n - 1] = a[n - 1];

    for (int i = 1; i < n; i++)
        pre[i] = pre[i - 1] + a[i];

    for (int i = n - 2; i >= 0; i--)
        suf[i] = suf[i + 1] + a[i];

    ll ans = 1;
    for (int i = 0; i < n - 1; i++)
        ans = max(ans, __gcd(pre[i], suf[i + 1]));

    cout << ans << '\n';
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