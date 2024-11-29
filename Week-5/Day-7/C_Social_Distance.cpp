// problem: https://codeforces.com/problemset/problem/1367/C

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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ans = 0, l = 0, r = 0;

        while (r < n)
        {
            if (s[r] == '1')
            {
                r += k + 1;
                l = r;
                continue;
            }
            if (r - l == k)
            {
                ans++;
                r++;
                l = r;
            }
            else if (s[r] == '0')
            {
                r++;
                if (r >= n)
                    ans++;
            }
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