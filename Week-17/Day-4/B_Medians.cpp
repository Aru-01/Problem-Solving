// problem: https://codeforces.com/problemset/problem/2032/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
#define out(i, j) cout << 1 << " " << i << " " << j << "\n"
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    if (n == 1)
    {
        dekhao(1);
        dekhao(1);
        return;
    }

    if (k == 1 || k == n)
    {
        dekhao(-1);
        return;
    }

    dekhao(3);
    if (k % 2)
        out(k - 1, k + 2);
    else
        out(k, k + 1);
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