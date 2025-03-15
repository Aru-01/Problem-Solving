// problem: https://codeforces.com/problemset/problem/1922/C
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

    map<int, int> mp;
    mp[1] = 1, mp[n] = n - 1;

    for (int i = 2; i <= n - 1; i++)
    {
        if (abs(a[i - 1] - a[i]) < abs(a[i] - a[i + 1]))
            mp[i] = i - 1;
        else
            mp[i] = i + 1;
    }

    vector<int> pre(n + 1, 0), post(n + 1, 0);
    pre[2] = 1;
    post[n - 1] = 1;

    for (int i = 3; i <= n; i++)
    {
        if (mp[i - 1] == i)
            pre[i] = pre[i - 1] + 1;
        else
            pre[i] = pre[i - 1] + abs(a[i] - a[i - 1]);
    }
    for (int i = n - 2; i >= 1; i--)
    {
        if (mp[i + 1] == i)
            post[i] = post[i + 1] + 1;
        else
            post[i] = post[i + 1] + abs(a[i] - a[i + 1]);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x < y)
            dekhao(abs(pre[x] - pre[y]));
        else
            dekhao(abs(post[x] - post[y]));
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