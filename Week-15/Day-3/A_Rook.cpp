// problem: https://codeforces.com/problemset/problem/1907/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(c, n) cout << c << n << "\n"
using namespace std;

void solve()
{
    string s;
    cin >> s;

    for (char i = 'a'; i <= 'h'; i++)
    {
        if (i != s[0])
            dekhao(i, s[1]);
    }
    for (char i = '1'; i <= '8'; i++)
    {
        if (i != s[1])
            dekhao(s[0],i);
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