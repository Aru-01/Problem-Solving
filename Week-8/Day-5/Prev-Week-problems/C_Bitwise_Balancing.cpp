// problem: https://codeforces.com/contest/2020/problem/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    ll b, c, d;
    cin >> b >> c >> d;
    ll a = 0;

    for (int i = 0; i < 62; i++)
    {
        ll bit = 1ll << i;
        ll bb = (bit & b);
        ll cc = (bit & c);
        ll dd = (bit & d);
        if ((bit | bb) - dd == (bit & cc))
        {
            a += bit;
        }
    }
    if ((a | b) == (d + (a & c)))
    {
        cout << a << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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