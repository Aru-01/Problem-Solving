// problem:
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
    vector<ll> a(n);
    vector<int> cnt(30, 0);

    for (ll &i : a)
    {
        cin >> i;
        for (int j = 0; j < 30; j++)
        {
            if (i & (1LL << j))
                cnt[j]++;
        }
    }

    ll ans = 0;

    for (ll i : a)
    {
        ll sum = 0;
        for (int j = 0; j < 30; j++)
        {
            if (i & (1LL << j))
                sum += (n - cnt[j]) * (1LL << j);
            else
                sum += cnt[j] * (1LL << j);
        }
        ans = max(ans, sum);
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