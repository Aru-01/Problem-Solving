// problem: https://codeforces.com/problemset/problem/1520/D
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
    for (int &i : a)
        cin >> i;

    map<int, int> mp;
    ll cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        cnt += mp[a[i] - i + 1];
        mp[a[i] - i + 1]++;
    }
    dekhao(cnt);
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