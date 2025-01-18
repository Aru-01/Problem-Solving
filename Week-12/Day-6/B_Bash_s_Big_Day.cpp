// problem: https://codeforces.com/problemset/problem/757/B
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

    vector<int> a(n);
    map<int, int> mp;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if (a[i] != 1)
            ans = max(ans, mp[a[i]]);
    }
    if (n == 1)
    {
        dekhao(1);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j * j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                mp[j]++;
                ans = max(ans, mp[j]);
                if (a[i] / j != j)
                {
                    mp[a[i] / j]++;
                    ans = max(ans, mp[a[i] / j]);
                }
            }
        }
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