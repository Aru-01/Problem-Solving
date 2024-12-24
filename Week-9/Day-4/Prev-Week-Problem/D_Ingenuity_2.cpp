// problem: https://codeforces.com/problemset/problem/1974/D
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int num;
    string st;
    cin >> num >> st;
    int x = 0, y = 0;
    for (char c : st)
    {
        if (c == 'N')
            y++;
        else if (c == 'S')
            y--;
        else if (c == 'E')
            x++;
        else
            x--;
    }

    if (x % 2 != 0 || y % 2 != 0)
    {
        no;
        return;
    }
    else if (num == 2 && x == 0 && y == 0)
    {
        no;
        return;
    }

    int n = 0, s = 0, w = 1, e = 1;
    char ans[2] = {'R', 'H'};

    for (char c : st)
    {
        if (c == 'N')
        {
            cout << ans[n];
            n = 1 - n;
        }
        else if (c == 'S')
        {
            cout << ans[s];
            s = 1 - s;
        }
        else if (c == 'E')
        {
            cout << ans[e];
            e = 1 - e;
        }
        else
        {
            cout << ans[w];
            w = 1 - w;
        }
    }
    cout << '\n';
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