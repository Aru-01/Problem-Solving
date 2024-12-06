// problem: https://codeforces.com/problemset/problem/1705/B

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
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &i : a)
            cin >> i;
        reverse(a.begin(), a.end());
        while (!a.empty() && a.back() == 0)
        {
            a.pop_back();
        }
        if (a.empty())
        {
            cout << 0 << '\n';
            continue;
        }

        ll ans = 0;
        reverse(a.begin(), a.end());
        for (int i = 0; i < a.size() - 1; i++)
        {
            if (a[i] == 0)
                ans++;
            else
                ans += a[i];
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