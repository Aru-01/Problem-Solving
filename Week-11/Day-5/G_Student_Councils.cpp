// problem: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/G
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
    ll sum = 0;
    for (ll &i : a)
    {
        cin >> i;
        sum += i;
    }

    auto ok = [&](ll mid)
    {
        ll total = 0;

        for (ll i : a)
        {
            total += min(i, mid);
            if (total >= mid * n)
                return true;
        }

        return false;
    };

    ll l = 0, r = sum / n, mid, ans;
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
    while (t--)
        solve();
    return 0;
}