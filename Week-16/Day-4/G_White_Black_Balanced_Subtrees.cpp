// problem: https://codeforces.com/problemset/problem/1676/G
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
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }

    string s;
    cin >> s;

    vector<int> cnt(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
            cnt[i] = 1;
        else
            cnt[i] = -1;
    }

    for (int i = n - 2; i >= 0; i--)
    {
        cnt[a[i] - 1] += cnt[i + 1];
    }

    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (cnt[i] == 0)
            ans++;
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