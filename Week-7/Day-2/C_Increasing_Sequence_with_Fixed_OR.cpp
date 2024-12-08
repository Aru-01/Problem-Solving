// problem: https://codeforces.com/problemset/problem/1988/C

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
        ll n;
        cin >> n;
        deque<ll> ans;
        ans.push_front(n);

        for (int i = 0; i <= __lg(n); i++)
        {
            if ((n >> i) & 1)
            {
                ll val = n - (1ll << i);
                if (val > 0)
                    ans.push_front(val);
            }
        }

        cout << ans.size() << "\n";
        for (auto i : ans)
            cout << i << " ";
        cout << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}