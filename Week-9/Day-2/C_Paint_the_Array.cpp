// problem: https://codeforces.com/problemset/problem/1618/C
#include <bits/stdc++.h>
#define ll long long
#define zero cout << "0\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (ll &i : a)
        cin >> i;

    ll G1 = 0, G2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            G1 = __gcd(G1, a[i]);
        else
            G2 = __gcd(G2, a[i]);
    }

    ll ans = 0;
    bool ok = true;

    for (int i = 1; i < n; i += 2)
    {
        if (a[i] % G1 == 0)
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        ans = G1;
    }
    else
    {
        ok = true;
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] % G2 == 0)
            {
                ok = false;
            }
        }

        if (ok)
            ans = G2;
    }
    cout << ans << "\n";
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