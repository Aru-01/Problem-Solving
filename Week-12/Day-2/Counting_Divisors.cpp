// problem: https://cses.fi/problemset/task/1713
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

const int MAX_N = 1e6 + 7;
vector<int> divisors(MAX_N);

void solve()
{
    int n;
    cin >> n;
    dekhao(divisors[n]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1; i <= MAX_N; i++)
    {
        for (int j = i; j <= MAX_N; j += i)
        {
            divisors[j]++;
        }
    }

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}