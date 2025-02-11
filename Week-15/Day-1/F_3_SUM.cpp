// problem: https://codeforces.com/problemset/problem/1692/F
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
    map<int, int> mp;
    while (n--)
    {
        int x;
        cin >> x;
        mp[x % 10]++;
    }

    vector<int> ans;
    for (auto [x, y] : mp)
    {
        for (int i = 0; i < min(y, 3); i++)
            ans.push_back(x);
    }

    bool ok = false;
    for (int i = 0; i < ans.size() - 2; i++)
    {
        for (int j = i + 1; j < ans.size() - 1; j++)
        {
            for (int k = j + 1; k < ans.size(); k++)
            {
                ll x = ans[i] + ans[j] + ans[k];
                if (x % 10 == 3)
                {
                    ok = true;
                    break;
                }
            }
        }
    }

    if (ok)
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