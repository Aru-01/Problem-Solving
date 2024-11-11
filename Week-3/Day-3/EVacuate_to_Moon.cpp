// problem: https://www.codechef.com/problems/MOONSOON?tab=statement

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
        int n, m, h;
        cin >> n >> m >> h;

        priority_queue<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b.push(x);
        }

        ll ans = 0;
        while (!a.empty() && !b.empty())
        {
            ll x = 1ll * b.top() * h;
            ans += min(1ll * a.top(), x);
            a.pop(), b.pop();
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
