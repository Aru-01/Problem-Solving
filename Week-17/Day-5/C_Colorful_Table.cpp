// problem: https://codeforces.com/problemset/problem/1870/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define pi pair<int, int>
#define dekhao(n) cout << n << " "
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pi> a(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = {x, i + 1};
    }
    sort(a.begin(), a.end());

    map<int, int> mp;
    int mx = -1, mn = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        mx = max(mx, a[i].second);
        mn = min(mn, a[i].second);

        int l = 2 * (mx - mn + 1);

        mp[a[i].first] = max(mp[a[i].first], l);
    }

    for (int i = 1; i <= k; i++)
        dekhao(mp[i]);
    cout << "\n";
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