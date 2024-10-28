// problem :https://codeforces.com/problemset/problem/1722/C

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {

        int q, m = 3;
        cin >> q;
        map<string, vector<int>> mp;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= q; j++)
            {
                string a;
                cin >> a;
                mp[a].push_back(i);
            }
        }

        vector<int> ans(m + 1);
        for (auto [key, val] : mp)
        {
            vector<int> v = val;
            if (v.size() == 1)
            {
                ans[v[0]] += 3;
            }
            if (v.size() == 2)
            {
                ans[v[0]]++;
                ans[v[1]]++;
            }
        }
        for (int i = 1; i <= m; i++)
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}