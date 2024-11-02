// problem: https://codeforces.com/problemset/problem/1807/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c)
            cout << "+\n";
        else
            cout << "-\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}