// problem: https://codeforces.com/problemset/problem/1669/H

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
const int B = 30;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), bits(B + 1);
        for (int &i : a)
        {
            cin >> i;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = B; j >= 0; j--)
            {
                if ((a[i] >> j) & 1)
                    bits[j]++;
            }
        }
        int ans = 0;
        for (int i = B; i >= 0; i--)
        {
            if (bits[i] == n)
                ans += 1ll << i;
            else
            {
                int need = n - bits[i];
                if (need <= k)
                {
                    ans += 1ll << i;
                    k -= need;
                }
            }
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