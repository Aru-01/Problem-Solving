// problem: https://codeforces.com/problemset/problem/1828/B

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
        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans = __gcd(ans, abs(a[i] - i));
        }
        cout << ans << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}