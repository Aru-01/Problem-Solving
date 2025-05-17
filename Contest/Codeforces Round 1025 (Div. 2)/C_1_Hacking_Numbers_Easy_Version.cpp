// problem: https://codeforces.com/contest/2109/problem/C1
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    ll m;
    cin >> m;
    string r;
    dekhao("mul 9");

    cout.flush();
    cin >> r;

    if (r == "-1")
        return;

    dekhao("digit");
    cout.flush();
    cin >> r;

    if (r == "-1")
        return;

    dekhao("digit");
    cout.flush();
    cin >> r;
    if (r == "-1")
        return;

    cout << "add " << (m - 9) << '\n';
    cout.flush();
    cin >> r;

    if (r == "-1")
        return;

    dekhao("!");

    cout.flush();
    cin >> r;
    if (r == "-1")
        return;
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