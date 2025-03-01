// problem: https://codeforces.com/problemset/problem/1872/D
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;

    ll a = n / x;
    ll b = n / y;
    ll c = n / ((x * y) / __gcd(x, y));
    a -= c;
    b -= c;

    a = ((n * (n + 1)) / 2) - (((n - a) * (n - a + 1)) / 2);

    dekhao(a - (b * (b + 1) / 2));
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