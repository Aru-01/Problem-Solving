// problem: https://www.codechef.com/problems/MAXIMSCORE
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

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int cur = 0;

        if (i + 1 < n)
        {
            cur = max(cur, abs(a[i] - a[i + 1]));
        }
        if (i - 1 >= 0)
        {
            cur = max(cur, abs(a[i] - a[i - 1]));
        }

        ans = min(ans, cur);
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