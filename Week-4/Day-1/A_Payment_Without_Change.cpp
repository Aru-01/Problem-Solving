// problem: https://codeforces.com/problemset/problem/1256/A

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
        int a, b, n, s;
        cin >> a >> b >> n >> s;

        int d = min(s / n, a);

        if ((s - (d * n)) <= b)
            yes;
        else
            no;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}