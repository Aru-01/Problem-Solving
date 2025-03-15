// problem: https://codeforces.com/problemset/problem/2013/B
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
    ll sum = 0;
    for (int &i : a)
    {
        cin >> i;
        sum += i;
    }

    dekhao(sum - (2 * a[n - 2]));
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