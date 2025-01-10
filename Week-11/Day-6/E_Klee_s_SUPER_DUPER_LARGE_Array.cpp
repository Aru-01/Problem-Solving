// problem: https://codeforces.com/problemset/problem/2009/E
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

    ll l = k, r = n + k - 1, mid;

    ll prev_sum = (l - 1) * l / 2, total_sum = r * (r + 1) / 2;
    ll mid_sum = total_sum - prev_sum;
    ll half = mid_sum / 2, num, sum;

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        ll cur_sum = mid * (mid + 1) / 2;
        ll have = cur_sum - prev_sum;

        if (have <= half)
        {
            sum = have;
            num = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    ll ans1 = mid_sum - sum;
    ll temp = ans1;
    ans1 = abs(ans1 - sum);
    num++;
    ll ans2 = abs(sum + num - temp + num);

    dekhao(min(ans1, ans2));
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