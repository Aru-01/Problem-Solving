// problem: https://codeforces.com/contest/2102/problem/B
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
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int x = abs(a[0]);
    int cnt = 0;

    for (int i = 1; i < n; ++i)
    {
        if (abs(a[i]) < x)
            cnt++;
    }

    if (cnt <= n / 2)
        yes;
    else
        no;
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