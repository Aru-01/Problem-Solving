// problem: https://codeforces.com/contest/1668/problem/B
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

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    if (n > m)
    {
        no;
        return;
    }

    sort(a.begin(), a.end());
    ll cnt = 0;

    for (int i = 0; i < n ; i++)
    {
        cnt++;
        if (i == n - 1)
            cnt += a[i];
        else
            cnt += max(a[i], a[i + 1]);
    }

    if (cnt <= m)
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