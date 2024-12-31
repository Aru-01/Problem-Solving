// problem: https://cses.fi/problemset/task/1073
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n), tower;
    for (ll &i : a)
        cin >> i;

    for (ll i : a)
    {
        auto it = lower_bound(tower.begin(), tower.end(), i + 1);

        if (it != tower.end())
            *it = i;
        else
            tower.push_back(i);
    }

    cout << tower.size() << "\n";
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