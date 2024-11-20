// problem: https://codeforces.com/problemset/problem/1791/G1

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
        int n, c;
        cin >> n >> c;
        multiset<int> ml;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ml.insert(x + i + 1);
        }

        // for (auto x : ml)
        //     cout << x << " ";
        // cout << '\n';
        int ans = 0;
        ll sum = 0;
        for (auto x : ml)
        {
            if (sum + x > c)
                break;
            sum += x;
            ans++;
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