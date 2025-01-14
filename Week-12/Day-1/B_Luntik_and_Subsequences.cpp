// problem: https://codeforces.com/problemset/problem/1582/B
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

    int one = 0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
            zero++;
       else if (x == 1)
            one++;
    }

    dekhao(one * (1ll << zero));
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