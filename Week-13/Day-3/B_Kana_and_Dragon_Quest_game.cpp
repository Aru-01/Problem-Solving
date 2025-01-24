// problem: https://codeforces.com/problemset/problem/1337/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int x, n, m;
    cin >> x >> n >> m;

    while (n > 0 && x > 20)
    {
        x = (x / 2) + 10;
        n--;
    }
    while (m > 0 && x > 0)
    {
        x -= 10;
        m--;
    }
    if (x <= 0)
        yes;
    else
        no;
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