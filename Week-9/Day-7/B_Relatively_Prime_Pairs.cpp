// problem: https://codeforces.com/problemset/problem/1051/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    yes;
    for (ll i = l; i < r; i += 2)
        cout << i << " " << i + 1 << '\n';
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