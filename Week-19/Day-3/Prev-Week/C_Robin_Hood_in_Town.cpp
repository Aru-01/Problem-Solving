// problem: https://codeforces.com/problemset/problem/2014/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "-1\n"
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

    if (n < 3)
    {
        no;
        return;
    }

    sort(a.begin(), a.end());
    ll v = a[n / 2];
    ll ans = max(0LL, (v * n * 2 - sum + 1));

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