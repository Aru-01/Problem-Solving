// problem: https://codeforces.com/problemset/problem/1547/E
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << " "
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(k);
    for (int &i : a)
        cin >> i;

    vector<ll> ans(n + 1);
    for (int i : a)
    {
        int x;
        cin >> x;
        ans[i] = x;
    }

    ans[0] = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        ll val = ans[i - 1] + 1;
        if (!ans[i])
            ans[i] = val;
        else
            ans[i] = min(ans[i], val);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        ll val = ans[i + 1] + 1;
        ans[i] = min(ans[i], val);
    }

    for (int i = 1; i <= n; i++)
        dekhao(ans[i]);
    cout << "\n";
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