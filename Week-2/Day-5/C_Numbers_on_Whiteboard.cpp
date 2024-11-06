// problem: https://codeforces.com/problemset/problem/1430/C

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
        cin >> n;
        priority_queue<int> pq;
        for (int i = 1; i <= n; i++)
        {
            pq.push(i);
        }
        vector<pair<int, int>> ans;
        while (pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            // cout << a << " " << b << '\n';

            int c = a + b;
            if (c % 2 == 0)
                pq.push(c / 2);
            else
                pq.push((c + 1) / 2);

            ans.push_back({a, b});
        }
        cout << pq.top() << endl;
        for (auto [x, y] : ans)
        {
            cout << x << " " << y << "\n";
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