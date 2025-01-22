// problem: https://codeforces.com/problemset/problem/1726/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int &i : a)
        cin >> i;

    int ans = 0;

    for (int i = 0; i < n - 1; i++)
        ans = max(ans, a[i] - a[i + 1]);

    for (int i = 0; i < n - 1; i++)
        ans = max(ans, a[n - 1] - a[i]);

    for (int i = 0; i < n - 1; i++)
        ans = max(ans, a[i] - a[0]);

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