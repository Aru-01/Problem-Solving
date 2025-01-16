// problem: https://codeforces.com/problemset/problem/2049/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    x--, y--;

    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        ans[(x + i) % n] = i % 2;
    }

    if (n % 2 || (x - y) % 2 == 0)
        ans[x] = 2;

    for (int i : ans)
        cout << i << " ";
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