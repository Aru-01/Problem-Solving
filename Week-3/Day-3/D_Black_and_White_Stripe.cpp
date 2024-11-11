// problem: https://codeforces.com/problemset/problem/1690/D

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
        int l = 0, r = 0, ans = INT_MAX, cnt = 0;
        while (r < n)
        {
            if (s[r] == 'W')
                cnt++;

            if (r - l + 1 == k)
            {
                ans = min(ans, cnt);
                if (s[l] == 'W')
                    cnt--;
                l++;
            }
            r++;
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