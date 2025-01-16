// problem: https://codeforces.com/problemset/problem/230/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

bool isPrime(ll n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool isPerfectSqure(ll n)
{
    ll x = sqrtl(n);
    return (x * x) == n;
}

void solve()
{
    int n;
    cin >> n;

    while (n--)
    {
        ll x;
        cin >> x;

        if (isPerfectSqure(x) && isPrime(sqrtl(x)))
            yes;
        else
            no;
    }
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