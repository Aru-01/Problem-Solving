// problem: https://codeforces.com/contest/2102/problem/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    int full = n / p;
    int rem = n % p;

    if (rem == 0)
    {
        if (m == full * q)
            yes;
        else
            no;
    }
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