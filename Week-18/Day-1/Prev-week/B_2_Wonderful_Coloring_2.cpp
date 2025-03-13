// problem: https://codeforces.com/problemset/problem/1551/B2
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << " "
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a[n + 1], ans(n, 0), rem;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        a[x].push_back(i);
    }

    for (auto [x, y] : mp)
    {
        if (y >= k)
        {
            int temp = k;
            for (auto i : a[x])
            {
                if (!temp)
                    break;

                ans[i] = temp;
                temp--;
            }
        }
        else
        {
            for (auto i : a[x])
                rem.push_back(i);
        }
    }

    int s = rem.size() - (rem.size() % k), temp = k;

    for (int i = 0; i < s; i++)
    {
        if (!temp)
            temp = k;

        ans[rem[i]] = temp;
        temp--;
    }
    for (int i : ans)
        dekhao(i);
    cout << "\n";
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