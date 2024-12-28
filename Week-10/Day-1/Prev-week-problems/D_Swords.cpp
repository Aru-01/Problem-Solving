// problem: https://codeforces.com/problemset/problem/1216/D
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int mx = 0;
    for (int &i : a)
    {
        cin >> i;
        mx = max(i, mx);
    }
    ll gcd = 0, dif = 0;

    for (ll i : a)
    {
        dif += mx - i;
        gcd = __gcd(gcd, (mx - i));
    }

    cout << dif / gcd << " " << gcd << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
        solve();
    return 0;
}