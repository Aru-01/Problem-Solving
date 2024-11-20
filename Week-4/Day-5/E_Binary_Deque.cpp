// problem: https://codeforces.com/problemset/problem/1692/E

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int sum = 0, cnt_0 = 0;
        for (auto &i : a)
        {
            cin >> i;
            sum += i;
            if (i == 0)
                cnt_0++;
        }
        if (sum == k)
            cout << 0 << '\n';
        else if (sum < k)
            cout << -1 << '\n';
        else
        {
            int l = 0, r = 0, cnt = 0, s = 0;
            while (r < n)
            {
                s += a[r];
                if (s == k)
                    cnt = max(cnt, r - l + 1);
                else if (s > k)
                {
                    s -= a[l];
                    l++;
                }

                r++;
            }
            cout << n - cnt << "\n";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}