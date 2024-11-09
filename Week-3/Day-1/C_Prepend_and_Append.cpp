// problem: https://codeforces.com/problemset/problem/1791/C

#include <bits/stdc++.h>
#define ll long long
#define chalayDen cout
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
        string s;
        cin >> s;
        int l = 0, r = n - 1, ans = n;

        while (l < r)
        {
            if (s[l] == s[r])
                break;
            else
            {
                ans -= 2;
                l++;
                r--;
            }
        }
        chalayDen << ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}