// problem: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    string p, t;
    cin >> p >> t;

    int n = p.size(), m = t.size();

    vector<int> a(n);
    for (int &i : a)
        cin >> i, i--;
    bool found = false;

    auto ok = [&](int del)
    {
        vector<bool> bad(n);
        for (int i = 0; i <= del; i++)
        {
            bad[a[i]] = true;
        }
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (!bad[i] && p[i] == t[j])
            {
                j++;
            }
            if (j == m)
            {
                found = true;
                return true;
            }
        }
        return false;
    };

    int l = 0, r = n - 1, ans = 0, mid;

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
    cout << (found ? ans + 1 : 0);
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