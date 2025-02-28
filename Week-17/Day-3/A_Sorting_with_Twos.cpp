// problem: https://codeforces.com/problemset/problem/1891/A
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
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 3; i <= n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            if ((i & (i - 1)) != 0)
            {
                no;
                return;
            }
        }
    }
    yes;
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