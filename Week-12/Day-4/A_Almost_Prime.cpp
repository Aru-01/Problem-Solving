// problem: https://codeforces.com/problemset/problem/26/A
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

    vector<int> prime(n + 1, 0);
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i; j <= n; j += i)
                prime[j]++;
        }
    }
    int ans = 0;
    for (int i : prime)
        if (i == 2)
            ans++;

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