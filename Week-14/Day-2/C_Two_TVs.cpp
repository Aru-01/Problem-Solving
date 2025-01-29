// problem: https://codeforces.com/problemset/problem/845/C
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
    map<int, int> d;
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }

    ll sum = 0;

    for (auto [key, val] : d)
    {
        sum += val;
        if (sum > 2)
        {
            no;
            return;
        }
    }
    yes;
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