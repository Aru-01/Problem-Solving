// problem: https://codeforces.com/problemset/problem/1760/F
#include <bits/stdc++.h>
#define ll long long
#define inf cout << "Infinity\n"
#define imp cout << "Impossible\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    ll n, c, d, sum = 0;
    cin >> n >> c >> d;
    vector<int> a(n);

    for (int &i : a)
    {
        cin >> i;
        sum += i;
    }

    sort(a.rbegin(), a.rend());

    if (sum >= c && n <= d)
    {
        inf;
        return;
    }
    ll l = 0, r = d + 1, ans = -1, mid;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        ll x = 0;

        if (mid != 0)
        {
            for (int i = 0; i < d; i++)
            {
                if ((i % (mid + 1)) < n)
                    x += a[i % (mid + 1)];
            }
        }
        else
            x = d * a[0];

        if (x >= c)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    if (ans == -1)
        imp;
    else if (ans == d + 1)
        inf;
    else
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