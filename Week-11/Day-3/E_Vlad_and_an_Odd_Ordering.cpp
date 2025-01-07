// problem: https://codeforces.com/problemset/problem/1926/E
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define dekhao(n) cout << n << "\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    for (int i = 1;; i *= 2)
    {
        int x = n / i;
        int y = (x + 1) / 2;

        if (k <= y)
        {
            ll k_odd = (2 * k) - 1;
            dekhao(k_odd * i);
            return;
        }
        else
            k -= y;
    }
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