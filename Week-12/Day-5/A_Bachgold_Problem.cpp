// problem: https://codeforces.com/problemset/problem/749/A
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

    dekhao(n / 2);
    if (!(n % 2))
    {
        for (int i = 0; i < n / 2; i++)
            cout << 2 << " ";
    }
    else
    {
        for (int i = 1; i < n / 2; i++)
            cout << 2 << " ";
        cout << 3 << " ";
    }
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