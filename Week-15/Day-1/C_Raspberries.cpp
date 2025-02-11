// problem: https://codeforces.com/problemset/problem/1883/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    int even = 0;
    for (int &i : a)
    {
        cin >> i;
        if (i % 2 == 0 && even < 2)
            even++;
    }
    int ans = INT_MAX;

    for (int i : a)
    {
        int x = i % k;
        if (x == 0)
            ans = 0;
        else
            ans = min(ans, k - x);
    }
    if (k == 4)
        ans = min(ans, 2 - even);
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