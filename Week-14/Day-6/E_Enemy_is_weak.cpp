// problem: https://codeforces.com/problemset/problem/61/E
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
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
    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    pbds<int> p1, p2;
    vector<ll> v1(n), v2(n);

    for (int i = n - 1; i >= 0; i--)
    {
        p1.insert(a[i]);
        v1[i] = p1.order_of_key(a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        p2.insert(a[i]);
        v2[i] = i - p2.order_of_key(a[i]);
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (v1[i] * v2[i]);
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