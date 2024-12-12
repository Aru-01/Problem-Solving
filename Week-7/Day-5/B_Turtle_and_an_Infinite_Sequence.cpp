// problem: https://codeforces.com/contest/1981/problem/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    int ans = n, mx = max(0, n - m);
    ans |= mx;
    ans |= (n + m);

    for (int i = 1; i <= m; i <<= 1)
    {
        ans |= i;
    }

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
