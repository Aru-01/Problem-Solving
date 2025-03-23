// problem: https://codeforces.com/problemset/problem/231/A
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
    int ans = 0;
    while (n--)
    {
        int p, v, t;
        cin >> p >> v >> t;
        int cnt = p + v + t;
        
        if (cnt >= 2)
            ans++;
    }
    dekhao(ans);
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