// problem: https://codeforces.com/problemset/problem/2040/B
#include <bits/stdc++.h>
#define ll long long
#define one cout << "1\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        one;
        return;
    }

    int cnt = 4, ans = 2;

    while (cnt < n)
    {
        ans++;
        cnt++;
        cnt *= 2;
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