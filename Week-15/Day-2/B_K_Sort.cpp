// problem: https://codeforces.com/problemset/problem/1987/B
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

    int cur = a[0], d = 0;
    ll total = 0;
    for (int i : a)
    {
        cur = max(cur, i);
        int dis = cur - i;
        total += dis;
        d = max(d, dis);
    }
    dekhao(total + d);
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