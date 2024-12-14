// problem: https://codeforces.com/problemset/problem/1763/A
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
    int ans = 0;
    for (int mask = 0; mask <= 12; mask++)
    {
        bool one = false, zero = false;

        for (int i = 0; i < n; i++)
        {
            bitset<12> bits(a[i]);

            if (bits[mask] == 1)
                one = true;

            if (bits[mask] == 0)
                zero = true;
        }
        if (one && zero)
            ans += 1ll << mask;
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