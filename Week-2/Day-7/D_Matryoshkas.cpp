// problem: https://codeforces.com/problemset/problem/1790/D

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
        multiset<int> mult;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mult.insert(x);
        }
        int ans = 0;
        while (!mult.empty())
        {
            int cur = *mult.begin();
            mult.erase(mult.begin());
            ans++;

            while (mult.count(cur + 1) > 0)
            {
                cur++;
                mult.erase(mult.find(cur));
            }
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
