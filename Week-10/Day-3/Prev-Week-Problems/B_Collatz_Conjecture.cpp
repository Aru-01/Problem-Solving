// problem: https://codeforces.com/problemset/problem/1982/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int x, y, k;
    cin >> x >> y >> k;

    while (x > 1 && k > 0)
    {

        int p = y - (x % y);

        if (p >= k)
        {
            x += k;
            k = 0;
        }
        else
        {
            k -= p;
            x += p;
        }
        while (x % y == 0)
            x /= y;
    }

    if (k > 0)
    {
        k = k % (y - 1);
        x += k;

        while (x % y == 0)
            x /= y;
    }

    cout << x << '\n';
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