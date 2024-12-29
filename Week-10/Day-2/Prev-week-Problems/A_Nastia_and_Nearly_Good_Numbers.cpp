// problem: https://codeforces.com/problemset/problem/1521/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;

    if (b == 1)
    {
        no;
        return;
    }
    ll x = a;
    ll y = a * b;
    ll z = a * (b + 1);

    yes;
    cout << x << " " << y << " " << z << '\n';
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