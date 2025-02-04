// problem: https://codeforces.com/problemset/problem/1324/D
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
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = x - a[i];
    }

    ll ans = 0;
    pbds<int> p;

    for (int i = n - 1; i >= 0; i--)
    {
        ans += p.order_of_key(-(a[i]));
        p.insert(a[i]);
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