// problem: https://codeforces.com/problemset/problem/1867/B
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
    int good = 0, atMost = 0, l = 0, r = n - 1;

    while (l < r)
    {
        if (s[l] == s[r])
            good += 2;
        else
            atMost++;

        l++;
        r--;
    }

    string ans = "";

    for (int i = 0; i <= n; i++)
    {
        int x = i;
        x -= atMost;

        if (x < 0)
        {
            ans += '0';
            continue;
        }

        x = max((x % 2), x - good);

        x = max(0, x - (n % 2));

        if (x == 0)
        {
            ans += '1';
        }
        else
        {
            ans += '0';
        }
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