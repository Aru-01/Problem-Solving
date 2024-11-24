// problem: https://www.codechef.com/problems/MINMXOR

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
        int n, XOR = 0;
        cin >> n;
        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
            XOR ^= i;
        }

        int ans = XOR;

        for (auto i : a)
        {
            int cur_xor = XOR ^ i;
            ans = min(ans, cur_xor);
        }
        cout << ans << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}