// problem: https://codeforces.com/problemset/problem/1927/E
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> ans(n);
    int mn = 1, mx = n;

    for (int i = 1; i <= k; i++)
    {
        for (int j = i; j <= n; j += k)
        {
            if (i % 2)
            {
                ans[j - 1] = mn++;
            }
            else
            {
                ans[j - 1] = mx--;
            }
        }
    }

    for (int i : ans)
        cout << i << " ";
    cout << '\n';
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