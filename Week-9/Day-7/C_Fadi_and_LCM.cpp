// problem:
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    ll x;
    cin >> x;

    ll a = 1, b = x;

    for (ll i = 1; i * i <= x; i++)
    {

        if (x % i==0)
        {
            ll d1 = i, d2 = x / i;

            if (__gcd(d1, d2) == 1)
            {
                if (max(a, b) > max(d1, d2))
                {
                    a = d1;
                    b = d2;
                }
            }
        }
    }
    cout << a << " " << b;
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