// problem: https://cses.fi/problemset/task/1095
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

const int MOD = 1e9 + 7;

ll pow(int x, int n)
{
    ll ans = 1 % MOD;
    while (n)
    {
        if (n & 1)
            ans = 1LL * (ans % MOD * x % MOD) % MOD;
        x = 1LL * x * x % MOD;
        n >>= 1;
    }
    return ans;
}
void solve()
{
    int x, n;
    cin >> x >> n;

    cout << pow(x, n) << '\n';
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