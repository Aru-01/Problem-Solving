// problem: https://codeforces.com/problemset/problem/1749/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    multiset<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }

    auto ok = [&](int m)
    {
        multiset<int> temp = a;
        for (int i = 1; i <= m; i++)
        {
            if (temp.empty())
                return false;
            int k = m - i + 1;

            auto it = temp.upper_bound(k);
            if (it == temp.begin())
                return false;
            it--;

            temp.erase(it);

            if (!temp.empty())
            {
                int val = *temp.begin();
                val += k;
                temp.erase(temp.begin());
                temp.insert(val);
            }
        }
        return true;
    };
    int l = 0, r = n, mid, ans;

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
    cin >> t;
    while (t--)
        solve();
    return 0;
}
