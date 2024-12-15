// problem: https://codeforces.com/problemset/problem/1527/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int p = 1;
    while (1)
    {
        if (p * 2 > n)
        {
            cout << p - 1 << '\n';
            break;
        }
        p *= 2;
    }
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