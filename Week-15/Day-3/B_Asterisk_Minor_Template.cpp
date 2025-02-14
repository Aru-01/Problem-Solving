// problem: https://codeforces.com/problemset/problem/1796/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n, s) cout << n << s << "\n"
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;

    if (a[0] == b[0])
    {
        yes;
        dekhao(a[0], "*");
        return;
    }
    if (a.back() == b.back())
    {
        yes;
        dekhao("*", a.back());
        return;
    }

    for (int i = 0; i < a.size() - 1; i++)
    {
        string s = a.substr(i, 2);
        if (b.find(s) != -1)
        {
            yes;
            cout << "*" << s << "*\n";
            return;
        }
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