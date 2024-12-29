// problem: https://codeforces.com/problemset/problem/1872/C
#include <bits/stdc++.h>
#define ll long long
#define minus cout << "-1\n"
#define yes cout << "YES\n"
using namespace std;

int get_prime(int n)
{
    while (n % 2 == 0)
    {
        return 2;
    }

    for (int i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            return i;
        }
    }
    if (n > 2)
        return n;
}

void solve()
{
    int l, r;
    cin >> l >> r;

    if (r <= 3)
    {
        minus;
        return;
    }

    if (l < r)
    {
        if (r % 2)
            r--;
        cout << 2 << " " << r - 2 << '\n';
        return;
    }
    int prime = get_prime(l);
    if (prime == l)
    {
        minus;
        return;
    }
    cout << prime << " " << l - prime << '\n';
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