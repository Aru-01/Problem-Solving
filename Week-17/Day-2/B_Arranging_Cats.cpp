// problem: https://codeforces.com/problemset/problem/1921/B
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

    string s, f;
    cin >> s >> f;

    int extra = 0, miss = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0' && f[i] == '1')
            extra++;
        if (s[i] == '1' && f[i] == '0')
            miss++;
    }
    dekhao(max(extra, miss));
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