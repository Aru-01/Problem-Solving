// problem: https://codeforces.com/problemset/problem/1974/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    map<tuple<int, int, int>, int> mp;
    ll ans = 0;

    for (int i = 0; i < n - 2; i++)
    {
        tuple<int, int, int> t = {a[i], a[i + 1], a[i + 2]};
        vector<tuple<int, int, int>> v(3);

        v[0] = {0, a[i + 1], a[i + 2]};
        v[1] = {a[i], 0, a[i + 2]};
        v[2] = {a[i], a[i + 1], 0};

        for (auto i : v)
        {
            ans += mp[i] - mp[t];
            mp[i]++;
        }
        mp[t]++;
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