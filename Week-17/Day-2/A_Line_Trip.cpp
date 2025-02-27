// problem: https://codeforces.com/problemset/problem/1901/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int ans = 2 * (x - a[n]);
    for (int i = 1; i <= n; i++)
        ans = max(ans, a[i] - a[i - 1]);

    dekhao(ans);
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