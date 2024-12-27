// problem:
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int ss = 0, pp = 0, si = 0, pi = -1, idx = 0;

    for (char i : s)
    {
        if (i == 'p')
        {
            pp++;
            if (pi == -1)
                pi = idx;
        };
        if (i == 's')
        {
            ss++;
            si = idx;
        };
        idx++;
    }

    if (ss == 0 || pp == 0)
    {
        yes;
        return;
    }
    if (pi == n - 1 || si == 0)
    {
        yes;
        return;
    }
    no;
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