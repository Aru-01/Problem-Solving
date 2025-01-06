// problem: https://codeforces.com/problemset/problem/1201/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    auto ok = [&](int median)
    {
        ll cnt = 0;
        for (int i = (n / 2); i < n; i++)
        {
            cnt += (a[i] < median ? (median - a[i]) : 0);
        }
        return cnt <= k;
    };

    sort(a.begin(), a.end());

    int l = 1, r = 2e9, ans, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
        solve();
    return 0;
}