// problem: https://codeforces.com/problemset/problem/1941/A
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

    vector<int> b(n), c(m);
    for (int &i : b)
        cin >> i;
    for (int &i : c)
        cin >> i;

    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[i] + c[j] <= k)
                cnt++;
        }
    }
    dekhao(cnt);
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