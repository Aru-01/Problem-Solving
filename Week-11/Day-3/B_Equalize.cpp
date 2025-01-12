// problem: https://codeforces.com/problemset/problem/1928/B
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

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    int cnt = 0;

    for (int i = 0; i < a.size(); i++)
    {
        int x = a[i] + n;
        auto it = lower_bound(a.begin(), a.end(), x);
        int y = it - a.begin() - i;
        cnt = max(cnt, y);
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