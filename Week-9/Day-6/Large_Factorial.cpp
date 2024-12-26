// problem: https://www.codechef.com/problems/FUM
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

const int MOD = 1e9 + 7;

void solve()
{
    int n, ans = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
        ans = (1LL * (ans % MOD) * (i % MOD)) % MOD;

    cout << ans << '\n';
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