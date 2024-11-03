// problem: https://codeforces.com/problemset/problem/1702/C

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        map<int, set<int>> mp;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        for (int i = 0; i < m; i++)
        {
            int l, r;
            cin >> l >> r;
            if (mp.find(l) == mp.end() || mp.find(r) == mp.end())
                cout << "NO\n";
            else
            {
                int li, ri;
                li = *mp[l].begin();
                ri = *mp[r].rbegin();
                if (li < ri)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}