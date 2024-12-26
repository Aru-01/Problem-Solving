// problem: https://codeforces.com/problemset/problem/735/D
#include <bits/stdc++.h>
#define ll long long
#define one cout << "1\n"
#define two cout << "2\n"
#define three cout << "3\n"
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (!(n % i)) // means (n is disible by i == 0)
            return false;
    }

    return true;
}
void solve()
{
    int n;
    cin >> n;

    if (isPrime(n))
        one;
    else if (!(n % 2) || isPrime(n - 2))
        two;
    else
        three;
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