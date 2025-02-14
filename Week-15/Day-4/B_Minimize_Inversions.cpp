// problem: https://codeforces.com/problemset/problem/1918/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define pi pair<int, int>
#define dekhao(n) cout << n << " "
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pi> a(n);
    for (auto &[i, j] : a)
        cin >> i;
    for (auto &[i, j] : a)
        cin >> j;

    sort(a.begin(), a.end());

    for (auto [i, j] : a)
        dekhao(i);
    cout << '\n';
    for (auto [i,j] : a)
        dekhao(j);
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