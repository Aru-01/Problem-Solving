// problem: https://codeforces.com/problemset/problem/1805/A

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
            x ^= i;
            // cout << x << " ";
        }
        for (auto &i : a)
        {
            i ^= x;
            // cout << i << " ";
        }
        int y = 0;
        for (auto i : a)
        {
            y ^= i;
            // cout << y << " ";
        }
        if (y == 0)
            cout << x << '\n';
        else
            cout << -1 << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}