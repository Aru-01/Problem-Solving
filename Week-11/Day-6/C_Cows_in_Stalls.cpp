// problem: https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/C
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

    vector<int> a(n);

    for (int &i : a)
        cin >> i;

    sort(a.begin(), a.end());

    auto ok = [&](int mid)
    {
        int cnt = 1, l = 0;
        for (int r = 1; r < n; r++)
        {
            if (a[r] - a[l] >= mid)
            {
                cnt++;
                l = r;
            }
        }
        return cnt >= k;
    };

    int l = 1, r = a.back() , mid, ans;

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    dekhao(ans);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
        solve();
    return 0;
}
