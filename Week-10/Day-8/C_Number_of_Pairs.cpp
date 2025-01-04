// problem:
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    sort(a.begin(), a.end());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        auto up = upper_bound(a.begin() + i + 1, a.end(), r - a[i]) - a.begin();
        auto low = lower_bound(a.begin() + i + 1, a.end(), l - a[i]) - a.begin();
        ans += up - low;
    }
    cout << ans << '\n';
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