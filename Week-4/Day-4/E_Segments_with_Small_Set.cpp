// problem: https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/E

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
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;
    map<int, int> mp;

    int l = 0, r = 0;
    ll ans = 0;

    while (r < n)
    {
        mp[a[r]]++;
        if (mp.size() <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (mp.size() > k && l < r)
            {
                mp[a[l]]--;
                if (mp[a[l]] == 0)
                {
                    mp.erase(a[l]);
                }
                l++;
            }
            if (mp.size() <= k)
            {
                ans += r - l + 1;
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