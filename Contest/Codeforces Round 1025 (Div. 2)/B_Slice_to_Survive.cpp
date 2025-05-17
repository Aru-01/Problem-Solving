// problem: https://codeforces.com/contest/2109/problem/B

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

long long res(long long x)
{
    if (x <= 1)
        return 0;

    long long ans = 0;
    x--;
    while (x > 0)
    {
        x >>= 1;
        ans++;
    }
    return ans;
}

void solve()
{
    long long n, m, a, b;
    cin >> n >> m >> a >> b;

    long long min_row = min(a, n - a + 1);
    long long min_col = min(b, m - b + 1);

    long long hor = 1 + res(m) + res(min_row);
    long long ver = 1 + res(n) + res(min_col);

    dekhao(min(hor, ver));
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