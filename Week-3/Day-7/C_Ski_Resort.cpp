// problem: https://codeforces.com/problemset/problem/1840/C

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int l = 0;
        int cnt = 0;
        ll ans = 0;

        while (l < n)
        {
            if (a[l] <= q)
                cnt++;
            else
                cnt = 0;
            // -5 0 -10 || 1, 3, 6
            // 6 1 3
            // 0 3 -2 5 -4 -4 || 1,3,6,7,9
            ans += max(0, cnt - k + 1);
            l++;
        }
        cout << ans << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}