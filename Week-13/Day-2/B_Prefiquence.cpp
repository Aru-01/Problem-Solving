// problem: https://codeforces.com/problemset/problem/1968/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int j = 0;
    for (int i = 0; i < m && j < n; i++)
    {
        if (b[i] == a[j])
            j++;
    }
    dekhao(j);
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