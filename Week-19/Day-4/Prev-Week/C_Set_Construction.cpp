// problem: https://codeforces.com/problemset/problem/1761/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << " "
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, set<int>> mp;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char c;
            cin >> c;
            if (c == '0')
                mp[j].insert(j);
            else
                mp[j].insert(i);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        dekhao(mp[i].size());
        for (auto it : mp[i])
            dekhao(it);
        cout << "\n";
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