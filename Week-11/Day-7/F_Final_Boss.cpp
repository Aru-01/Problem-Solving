// problem: https://codeforces.com/problemset/problem/1985/F
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int h, n;
    cin >> h >> n;
    vector<int> a(n), c(n);
    for (int &i : a)
        cin >> i;
    for (int &i : c)
        cin >> i;

    auto ok = [&](ll m)
    {
        ll dam = 0;
        for (int i = 0; i < n; i++)
        {
            ll attack = (m + c[i] - 1) / c[i];
            dam += attack * a[i];

            if (dam >= h)
                return true;
        }
        return false;
    };

    ll l = 1, r = 1e11, mid, ans;
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