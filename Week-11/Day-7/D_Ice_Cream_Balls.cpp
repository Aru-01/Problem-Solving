// problem: https://codeforces.com/problemset/problem/1862/D
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    ll l = 1, r = 2e9, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        ll x = (mid * (mid - 1)) / 2;
        if (x <= n)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    ll res = (ans * (ans - 1)) / 2;
    ll dif = n - res;
    ans += dif;
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