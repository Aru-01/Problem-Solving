// problem: https://codeforces.com/problemset/problem/2014/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    ll x = n - k + 1;
    ll ans = (n * (n + 1) / 2) - (x * (x - 1) / 2);

    if (ans % 2)
        no;
    else
        yes;
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