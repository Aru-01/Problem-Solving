// problem: https://codeforces.com/problemset/problem/1722/G
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

    if (n == 3)
    {
        dekhao("1 2 3");
        return;
    }

    ll sum = 0;
    for (int i = 1; i < n - 2; i++)
    {
        cout << i << " ";
        sum ^= i;
    }
    cout << (1 << 29) << " " << (1 << 30) << " " << (sum ^ (1 << 29) ^ (1 << 30)) << '\n';
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