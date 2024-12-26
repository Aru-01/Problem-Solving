// problem: https://codeforces.com/problemset/problem/1993/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, int> mp;
    for (char i : s)
        mp[i]++;

    int ans = 0;

    ans += min(n, mp['A']);
    ans += min(n, mp['B']);
    ans += min(n, mp['C']);
    ans += min(n, mp['D']);

    cout << ans << "\n";
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

