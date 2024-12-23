// problem: https://codeforces.com/problemset/problem/1675/B
#include <bits/stdc++.h>
#define ll long long
#define minus cout << "-1\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int &i : a)
        cin >> i;

    int ans = 0;

    for (int i = n - 2; i >= 0; i--)
    {
        while (a[i] >= a[i + 1])
        {
            if (a[i] == 0)
            {
                minus;
                return;
            };
            ans++;
            a[i] /= 2;
        }
    }

    cout << ans << '\n';
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