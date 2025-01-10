// problem: https://codeforces.com/problemset/problem/1873/E
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    auto ok = [&](ll h)
    {
        ll need_water = 0;
        for (int water : a)
        {
            if (h > water)
            {
                need_water += (h - water);
                if (need_water > x)
                    return false;
            }
        }
        return x >= need_water;
    };

    ll l = 1, r = 1e18, mid, ans;

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