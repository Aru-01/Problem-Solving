// problem: https://codeforces.com/problemset/problem/1919/A
#include <bits/stdc++.h>
#define ll long long
#define Alice cout << "Alice\n"
#define Bob cout << "Bob\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    if ((a + b) % 2)
        Alice;
    else
        Bob;
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