// problem: https://codeforces.com/contest/2093/problem/E
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
    map<int, int> mp;
    for (int &i : a)
    {
        cin >> i;
        mp[i] = 1;
    }

    auto ok = [&](int mid)
    {
        set<int> st;
        int cnt = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] < mid)
            {
                st.insert(a[i]);
            }
            if (st.size() == mid)
            {
                cnt++;
                st.clear();
            }
        }
        return cnt >= k;
    };

    int l = 0,
        r = (n + k - 1) / k, ans = 0, mid;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    dekhao(ans);
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