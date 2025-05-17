
// problem:
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(m, n) cout << m << " " << n << "\n"
using namespace std;

void solve()
{
    int n, m, l, r;
    cin >> n >> m >> l >> r;

    int a = -l, b = r;
    int x = min(m, a);

    dekhao(-x, m - x);
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