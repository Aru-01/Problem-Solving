// problem: https://codeforces.com/problemset/problem/1883/B

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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        // for (auto [x, y] : mp)
        //     cout << x << "->" << y << endl;

        // cout << "-----------" << endl;

        int odd_cnt = 0;
        for (auto [c, v] : mp)
        {
            if (v % 2 != 0)
                odd_cnt++;
        }

        if (k < --odd_cnt)
            no;
        else
            yes;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}