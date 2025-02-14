// problem: https://codeforces.com/problemset/problem/1705/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define pi pair<ll, ll>
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, c, q;
    string s;
    cin >> n >> c >> q >> s;
    // cout << n << c << q << s<<"\n";

    vector<pi> len(c), op(c);
    ll cur_len = n;

    for (int i = 0; i < c; i++)
    {
        cin >> len[i].first >> len[i].second;
        // cout << len[i].first << " " << len[i].second;

        op[i] = {cur_len + 1, cur_len + (len[i].second - len[i].first + 1)};
        cur_len = op[i].second;
    }

    while (q--)
    {
        ll k;
        cin >> k;

        if (k <= n)
        {
            dekhao(s[k - 1]);
            continue;
        }
        for (int i = c - 1; i >= 0; i--)
        {
            if (k >= op[i].first && k <= op[i].second)
                k = len[i].first + (k - op[i].first);
        }
        dekhao(s[k - 1]);
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