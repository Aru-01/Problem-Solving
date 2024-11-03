// problem: https://codeforces.com/problemset/problem/1506/D

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<int> pq;
        for (auto [x, y] : mp)
            pq.push(y);

        while (!pq.empty())
        {
            if (pq.size() < 2)
                break;
            int x, y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            x--, y--;

            if (x >= 1)
                pq.push(x);
            if (y >= 1)
                pq.push(y);
        }
        // cout << pq.size() << '\n';
        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
