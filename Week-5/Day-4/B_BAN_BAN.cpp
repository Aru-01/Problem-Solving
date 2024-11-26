// problem: https://codeforces.com/problemset/problem/1747/B

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
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
        string s = "";
        while (n--)
        {
            s += "BAN";
        }
        vector<pi> ans;
        int l = 1, r = s.size() - 1;
        while (l < r)
        {
            ans.push_back({l, r});
            swap(s[l], s[r]);
            l += 3;
            r -= 3;
        }
        cout << ans.size() << '\n';
        for (auto [x, y] : ans)
            cout << x << " " << y << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}