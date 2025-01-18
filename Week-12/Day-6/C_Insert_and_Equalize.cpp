// problem: https://codeforces.com/problemset/problem/1902/C
#include <bits/stdc++.h>
#define ll long long
#define one cout << "1\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    if (n == 1)
    {
        one;
        return;
    }
    sort(a.begin(), a.end());
    ll x = 0, mx = a[n - 1];

    for (int i = 0; i < n; i++)
        x = __gcd(x, mx - a[i]);

    ll ans = 1;
    for (int i = 0; i < n; i++)
        ans += (mx - a[i]) / x;

    int last = mx - x;

    for (int i = n - 2; i >= 0; i--)
    {
        if (last != a[i])
            break;
        ans++;
        last -= x;
    }
    dekhao(ans);
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