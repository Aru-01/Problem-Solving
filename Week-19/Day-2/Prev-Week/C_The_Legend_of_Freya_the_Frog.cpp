// problem: https://codeforces.com/problemset/problem/2009/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    int X = ceil(x * 1.0 / k), Y = ceil(y * 1.0 / k);

    if (Y >= X)
        dekhao(2 * Y);
    else
        dekhao((2 * X)-1);
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