// problem: https://cses.fi/problemset/task/1660
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    ll sum = 0, ans = 0;
    map<ll, ll> mp;
    mp[sum] = 1;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        sum += a;
        if (mp[sum - x])
            ans++;

        mp[sum] = 1;
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