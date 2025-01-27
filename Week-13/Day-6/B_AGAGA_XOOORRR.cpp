// problem: https://codeforces.com/problemset/problem/1516/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    int xr = 0;
    for (ll &i : a)
    {
        cin >> i;
        xr ^= i;
    }

    if (xr == 0)
    {
        yes;
        return;
    }

    int x = 0, cnt = 0;
    for (ll i : a)
    {
        x ^= i;

        if (x == xr)
        {
            cnt++;
            x = 0;
        }
    }

    if (cnt >= 2)
        yes;
    else
        no;
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

