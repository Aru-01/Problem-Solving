// problem: https://codeforces.com/problemset/problem/1598/C
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
    ll sum = 0;
    vector<int> a(n);
    for (int &i : a)
    {
        cin >> i;
        sum += i;
    }

    ll ans = 0;
    sum *= 2;

    if (sum % n == 0)
    {
        sum /= n;
        map<int, int> mp;
        for (int i : a)
        {
            ans += mp[sum - i];
            mp[i]++;
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