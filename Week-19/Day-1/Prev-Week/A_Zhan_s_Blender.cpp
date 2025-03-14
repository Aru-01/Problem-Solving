// problem: https://codeforces.com/problemset/problem/2013/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;

    int mn = min(x, y);

    if (n % mn)
        dekhao((n / mn) + 1);
    else
        dekhao(n / mn);
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