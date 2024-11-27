// problem: https://codeforces.com/problemset/problem/2003/C

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
        int n;
        string s;
        cin >> n >> s;

        map<char, int> mp;
        for (char c : s)
            mp[c]++;

        priority_queue<pair<int, char>> pq;
        for (auto [x, y] : mp)
            pq.push({y, x});

        string ans = "";
        while (pq.size() > 1)
        {
            // cout << pq.top().first << "->" << pq.top().second << '\n';

            auto it = pq.top();
            pq.pop();
            auto it2 = pq.top();
            pq.pop();
            ans += it.second;
            ans += it2.second;

            if (it.first != 1)
                pq.push({it.first - 1, it.second});
            if (it2.first != 1)
                pq.push({it2.first - 1, it2.second});
        }
        if (!pq.empty())
        {
            auto it = pq.top();
            pq.pop();
            for (int i = 0; i < it.first; i++)
                ans += it.second;
        }
        cout << ans << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}