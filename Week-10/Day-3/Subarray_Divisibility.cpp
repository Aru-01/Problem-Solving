// problem: https://cses.fi/problemset/task/1662
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    ll sum = 0, ans = 0;
    map<ll, ll> mp;
    mp[sum] = 1;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        sum += a % n;
        sum = (n + sum) % n;

        ans += mp[sum];
        mp[sum]++;
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