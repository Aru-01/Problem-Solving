// problem: https://codeforces.com/problemset/problem/1843/B

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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int l = 0, op = 0;
        ll ans = 0;
        bool flag = false;
        while (l < n)
        {
            ans += abs(a[l]);
            if (a[l] < 0)
            {
                if (!flag)
                    op++;
                flag = true;
            }
            if (a[l] > 0)
                flag = false;
            l++;
        }
        cout << ans << " " << op << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}