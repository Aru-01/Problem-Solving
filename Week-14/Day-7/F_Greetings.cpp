// problem: https://codeforces.com/problemset/problem/1915/F
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define pi pair<int, int>
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n;
    cin >> n;

    vector<pi> a(n);
    pbds<int> p;
    for (auto &[i, j] : a)
    {
        cin >> i >> j;
        p.insert(j);
    }
    ll ans = 0;
    sort(a.begin(), a.end());

    for (auto [i, j] : a)
    {
        ans += p.order_of_key(j);
        p.erase(j);
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