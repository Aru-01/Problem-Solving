// problem: https://codeforces.com/contest/2000/problem/D

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
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (i > 0)
            {
                a[i] += a[i - 1];
            }
        }

        string s;
        cin >> s;
        int l = 0, r = n - 1;
        ll ans = 0;

        while (l < r)
        {
            while (s[l] != 'L' && l < n)
                l++;

            while (s[r] != 'R' && r > 0)
                r--;

            if (l < r)
            {
                if (l > 0)
                    ans += a[r] - a[l - 1];
                else
                    ans += a[r] - 0;
                l++;
                r--;
            }
        }

        cout << ans << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}