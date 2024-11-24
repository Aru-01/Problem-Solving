// problem: https://codeforces.com/problemset/problem/1914/B

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        
        for (int i = n - k; i <= n; i++)
            cout << i << " ";
        for (int i = n - k - 1; i >= 1; i--)
            cout << i << " ";
        cout << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}