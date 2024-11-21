// problem: https://codeforces.com/problemset/problem/1873/F

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
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> arr(n), height(n);
        for (auto &i : arr)
            cin >> i;
        for (auto &i : height)
            cin >> i;

        int l = 0, r = 1;
        ll curr = arr[0], ans = 0;

        if (curr <= k)
            ans = 1;

        while (r < n)
        {
            if (height[r - 1] % height[r] == 0)
                curr += arr[r];
            else
            {
                curr = arr[r];
                l = r;
            }

            while (curr > k)
            {
                curr -= arr[l];
                l++;
            }


            ans = max(ans, (ll) r - l + 1);
            r++;
        }

        cout << ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
