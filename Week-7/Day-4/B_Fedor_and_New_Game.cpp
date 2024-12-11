// problem: https://codeforces.com/problemset/problem/467/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m + 1);
    for (int &i : a)
        cin >> i;

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int cnt = 0;
        int x = a[i] ^ a[m];

        for (int j = 0; j <= __lg(x); j++)
        {
            if ((x >> j) & 1)
            {
                cnt++;
            }
        }
        if (cnt <= k)
            ans++;
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