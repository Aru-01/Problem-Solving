// problem: https://www.codechef.com/problems/XORRY1
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define pi pair<int, int>
using namespace std;

pi xorry(int x)
{
    int a = 0, b = 0, i = 0;
    while (1 << i <= x)
        i++;

    b = 1 << (i - 1);
    a = b ^ x;
    return {a, b};
}
void solve()
{
    int x;
    cin >> x;
    pi ans = xorry(x);
    cout << ans.first << " " << ans.second << '\n';
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