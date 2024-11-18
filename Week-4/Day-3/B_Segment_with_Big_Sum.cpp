// problem: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
void solve()
{
    int n;
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    int l = 0, r = 0;
    ll sum = 0, ans = n + 1;
    while (r < n)
    {
        sum += a[r];

        while (sum >= k && l <= r)
        {
            ans = min(ans, (ll)r - l + 1);
            sum -= a[l];
            l++;
        }

        r++;
    }
    if (ans == n + 1)
        cout << -1 << "\n";
    else
        cout << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}