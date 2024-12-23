// problem: https://codeforces.com/problemset/problem/678/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
void solve()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll x = (n / a) * p, y = (n / b) * q, overlap = (n / LCM(a, b));

    ll ans = ((x + y) - overlap * (p + q)) + overlap * (max(p, q));

    cout << ans << "\n";
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