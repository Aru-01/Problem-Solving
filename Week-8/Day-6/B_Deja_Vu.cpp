// problem: https://codeforces.com/problemset/problem/1891/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<int> x;

    for (ll &i : a)
        cin >> i;
    for (int i = 0; i < q; i++)
    {
        int query;
        cin >> query;
        if (x.empty() || x.back() > query)
            x.push_back(query);
    }
    for (int i = 0; i < n; i++)
    {
        for (ll j : x)
        {
            if (a[i] % (1 << j) == 0)
            {
                j--;
                a[i] += (1 << j);
            }
        }
    }
    for (ll i : a)
        cout << i << " ";
    cout << '\n';
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