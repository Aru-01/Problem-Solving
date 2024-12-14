// problem: https://codeforces.com/problemset/problem/1420/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    ll ans = 0;

    for (int i = 30; i >= 0; i--)
    {
        ll cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] >= pow(2, i) & a[j] < pow(2, i + 1))
                cnt++;
        }
        ans += (cnt * (cnt - 1)) / 2;
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