// problem: https://cses.fi/problemset/task/1620
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int &i : a)
    {
        cin >> i;
       
    }

    auto ok = [&](ll seconds)
    {
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += (seconds / a[i]);
            if (cnt >= t)
                return true;
        }
        return false;
    };

    ll l = 0, r = 1e18, mid, ans;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << '\n';
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