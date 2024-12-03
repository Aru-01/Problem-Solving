// problem: https://codeforces.com/problemset/problem/1974/A

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
        int x, y;
        cin >> x >> y;

        int ans = (y + 1) / 2, track_x = 0;

        if (y % 2 != 0)
        {
            track_x = (y / 2) * 7 + 11;

            // explaination
            //  ekta screen size jodi 15 hoy, tahola 4 size er 2 ta rakhle hoy 8, baki thake 7 ta. (15-8)
            //  abr jodi y odd hoy tahola last a just ekta thakbe jar jonno 15-4 = 11 hoy.
        }
        else
            track_x = (y / 2) * 7;

        if (x <= track_x)
            cout << ans << '\n';
        else
        {
            int z = x - track_x;
            cout << ans + ceil((double)z / 15) << '\n';
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}