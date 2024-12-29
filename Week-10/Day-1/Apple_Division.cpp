
// problem: https://cses.fi/problemset/task/1623
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    ll sum = 0, min_dif = INT_MAX;

    for (int &i : p)
    {
        cin >> i;
        sum += i;
    }


    for (int mask = 0; mask < (1 << n); mask++)
    {
        ll grp1 = 0;

        for (int i = 0; i < n; i++)
        {
            if ((1 << i) & mask)
                grp1 += p[i];
        }

        ll grp2 = sum - grp1;
        min_dif = min(abs(grp1 - grp2), min_dif);
        
    }
    cout << min_dif << '\n';
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