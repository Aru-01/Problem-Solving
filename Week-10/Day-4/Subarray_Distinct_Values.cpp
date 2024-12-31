// problem: https://cses.fi/problemset/task/2428
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    ll ans = 0, r = 0;
    map<ll, ll> mp;

    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
        while (mp.size() > k)
        {
            mp[a[r]]--;
            if (mp[a[r]] == 0)
                mp.erase(a[r]);
            r++;
        }
        ans += i - r + 1;
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