// problem: https://codeforces.com/problemset/problem/1389/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "-1 -1\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int l, r;
    cin >> l >> r;

    if (2 * l <= r)
        cout << l << " " << 2 * l << "\n";
    else
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

