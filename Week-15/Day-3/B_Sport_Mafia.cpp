// problem: https://codeforces.com/problemset/problem/1195/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll x = sqrt(9 + 8 * (n + k)) - 3;
    x /= 2;

    dekhao(n - x);
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