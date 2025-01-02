// problem: https://codeforces.com/problemset/problem/1676/E
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n), pre(n + 1);
    for (int &i : a)
        cin >> i;

    sort(a.rbegin(), a.rend());
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i - 1];
    }

    while (q--)
    {
        int k, ans = -1;
        cin >> k;

        auto it = lower_bound(pre.begin(), pre.end(), k);

        if (it != pre.end())
            ans = it - pre.begin();

        cout << ans << '\n';
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