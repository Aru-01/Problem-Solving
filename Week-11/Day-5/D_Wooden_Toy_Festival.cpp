// problem: https://codeforces.com/problemset/problem/1840/D
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    sort(a.begin(), a.end());

    auto ok = [&](int time)
    {
        int cnt = 1, l = 0;
        for (int r = 0; r < n; r++)
        {
            if ((a[r] - a[l] > 2 * time))
            {
                cnt++;
                l = r;
            }
        }
        return cnt <= 3;
    };

    int l = 0, r = 1e9, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
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