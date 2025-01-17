// problem: https://codeforces.com/problemset/problem/1474/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;

    int x = n + 1;
    while (!isPrime(x))
        x++;

    int x2 = x + n;
    while (!isPrime(x2))
        x2++;

    dekhao(x * x2);
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