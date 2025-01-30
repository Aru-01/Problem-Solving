// problem: https://codeforces.com/problemset/problem/600/B
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << " "
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T,
                  null_type, less_equal<T>, rb_tree_tag,
                  tree_order_statistics_node_update>;
void solve()
{
    int n, m;
    cin >> n >> m;

    pbds<int> p;
    while (n--)
    {
        int x;
        cin >> x;
        p.insert(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        x++;
        dekhao(p.order_of_key(x));
    }
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