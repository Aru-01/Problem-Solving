// problem: https://codeforces.com/problemset/problem/2013/B

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
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (ll &i : arr)
            cin >> i;
        for (int i = 0; i < n - 2; i++)
        {
            arr[n - 2] -= arr[i];
        }

        cout << arr[n - 1] - arr[n - 2] << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}