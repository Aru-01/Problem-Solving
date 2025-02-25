// problem: https://codeforces.com/problemset/problem/1925/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n 
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            dekhao(char(j + 'a'));
        }
    }
    cout << "\n";
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