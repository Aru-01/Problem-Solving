// problem: https://www.codechef.com/problems/XORRY2
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

int xorry(int x)
{
    int a = 1, b = 0, j = 0;
    while (1 << j <= x)
        j++;
    j--;
    int ans = 1;
    bool ok = false;
    for (int i = j - 1; i >= 0; i--)
    {
        if ((1 << i) & x)
        {
            b = b | (1 << i);
            ok = true;
        }
        else
        {
            if (ok)
                ans = ans * 2;
        }
    }
    return ans;
}
void solve()
{
    int x;
    cin >> x;
    int ans = xorry(x);
    cout << ans << '\n';
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