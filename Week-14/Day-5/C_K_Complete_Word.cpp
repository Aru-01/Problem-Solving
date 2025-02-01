// problem: https://codeforces.com/problemset/problem/1332/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;

    int ans = 0;
    for (int i = 0; i < (k + 1) / 2; i++)
    {

        map<char, int> mp;
        for (int j = i; j < n; j += k)
            mp[s[j]]++;

        if (2 * i + 1 != k)
        {
            for (int j = n - 1 - i; j >= 0; j -= k)
                mp[s[j]]++;
        }
        int cnt = 0, mx = 0;
        for (auto [x, y] : mp)
        {
            cnt += y;
            mx = max(mx, y);
        }
        ans += (cnt - mx);
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