// problem: https://codeforces.com/problemset/problem/1272/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "0\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;
void print(int n, char c)
{
    for (int i = 0; i < n; i++)
        cout << c;
}
void solve()
{
    string s;
    cin >> s;

    int l = 0, r = 0, u = 0, d = 0;
    for (char i : s)
    {
        if (i == 'L')
            l++;
        if (i == 'R')
            r++;
        if (i == 'U')
            u++;
        if (i == 'D')
            d++;
    }
    int x = min(l, r);
    int y = min(u, d);

    if (x > 0 && y > 0)
    {
        dekhao(2 * (x + y));
        print(x, 'L');
        print(y, 'U');
        print(x, 'R');
        print(y, 'D');
        cout << '\n';
    }
    else
    {
        if (x > 0)
        {
            dekhao(2);
            cout << "LR\n";
        }
        else if (y > 0)
        {
            dekhao(2);
            cout << "UD\n";
        }
        else
            no;
    }
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