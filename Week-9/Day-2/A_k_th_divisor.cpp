// problem: https://codeforces.com/problemset/problem/762/A
#include <bits/stdc++.h>
#define ll long long
#define minus cout << "-1\n"
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> divisors;

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (n / i != i)
                divisors.push_back(n / i);
        }
    }
    if (divisors.size() < k)
    {
        minus;
        return;
    };

    sort(divisors.begin(), divisors.end());
    cout << divisors[k - 1] << '\n';
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