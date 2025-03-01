// problem: https://codeforces.com/problemset/problem/1875/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n), b(m);
    for (int &i : a)
        cin >> i;
    for (int &i : b)
        cin >> i;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a[0] < b[m - 1])
        swap(a[0], b[m - 1]);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (!(k % 2) && a[n - 1] > b[0])
        swap(a[n - 1], b[0]);

    ll ans = 0;

    for (int i : a)
        ans += i;

    dekhao(ans);
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