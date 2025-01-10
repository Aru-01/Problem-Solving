// problem: https://codeforces.com/problemset/problem/1593/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(k);
    for (ll &i : a)
    {
        cin >> i;
        i = n - i;
    }

    sort(a.begin(), a.end());

    auto ok = [&](ll mid)
    {
        
        ll x = 0;
        for (int i = 0; i < mid; i++)
            x += a[i];

        return x < n;
    };

    ll l = 0, r = k , mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
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
