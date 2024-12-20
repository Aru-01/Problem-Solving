// problem: https://codeforces.com/problemset/problem/805/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string ans;
    while (ans.size() < n)
        ans += 'a';

    for (int i = 2; i < n; i += 4)
    {
        ans[i] = 'b';
        if (i + 1 < n)
            ans[i + 1] = 'b';
    }

    cout << ans << "\n";
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