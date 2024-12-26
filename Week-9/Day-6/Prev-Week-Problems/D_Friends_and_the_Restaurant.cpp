// problem: https://codeforces.com/problemset/problem/1729/D
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n, 0);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] -= x;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] += x;
    }

    sort(a.begin(), a.end(), greater<int>());

    int l = 0, r = n - 1, ans = 0;

    while (l < r)
    {
        if (a[l] >= 0 && a[r] >= 0)
        {
            ans++;
            l++;
            r--;
        }
        else if (a[l] < 0 && a[r] < 0)
            break;
        else if (a[l] >= 0)
        {
            if (a[l] - abs(a[r]) >= 0)
            {
                ans++;
                l++;
                r--;
            }
            else
                r--;
        }
    }

    cout << ans << "\n";
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