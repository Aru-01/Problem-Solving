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
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    int l = 0, r = 0;
    ll sum = 0, ans = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > k && l <= r)
            {
                sum -= v[l];
                l++;
            }

            if (sum <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}