// problem: https://www.codechef.com/problems/CHAPD
#include <bits/stdc++.h>
#define ll long long
#define no cout << "No\n"
#define yes cout << "Yes\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;

    while (__gcd(a, b) > 1)
    {
        b /= __gcd(a, b);
    }
    if (b > 1)
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