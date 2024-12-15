// problem: https://codeforces.com/contest/1991/problem/B
#include <bits/stdc++.h>
#define ll long long
#define minus cout << "-1\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n + 1, 0);
    for (int i = 1; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i] | b[i + 1];
    }

    bool ok = true;
    for (int i = 1; i < n; i++)
    {
        if ((a[i - 1] & a[i]) != b[i])
        {
            ok = false;
            break;
        }
    }
    if (!ok)
    {
        minus;
        return;
    }

    for (int i : a)
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