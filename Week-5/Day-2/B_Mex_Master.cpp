// problem: https://codeforces.com/problemset/problem/1806/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int zero = 0, non_zero = 0;
        for (int &i : a)
        {
            cin >> i;
            if (i == 0)
                zero++;
            else
                non_zero++;
        }
        int ans = 0;
        if (zero == 0)
            ans = 0;
        else
        {
            if (zero - 1 <= non_zero)
                ans = 0;
            else
            {
                int mx = *max_element(a.begin(), a.end());
                if (mx == 1)
                    ans = 2;
                else
                    ans = 1;
            }
        }
        cout << ans << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
