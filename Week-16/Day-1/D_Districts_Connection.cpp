// problem: https://codeforces.com/problemset/problem/1433/D
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(i, j) cout << i << " " << j << "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    bool ok = false;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[1] != a[i])
            ok = true;
    }

    if (!ok)
    {
        no;
        return;
    }

    yes;
    int city = -1;
    for (int i = 2; i <= n; i++)
    {
        if (a[1] != a[i])
        {
            dekhao(1, i);
            city = i;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == a[1])
            dekhao(city, i);
    }
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