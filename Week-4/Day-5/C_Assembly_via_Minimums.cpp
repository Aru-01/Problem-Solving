// problem: https://codeforces.com/problemset/problem/1857/C

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

        int m = (n * (n - 1)) / 2;
        vector<int> a(m);

        for (auto &i : a)
            cin >> i;

        sort(a.begin(), a.end());

        int idx = 0, step = n - 1;
        vector<int> ans;

        while (idx < m)
        {
            ans.push_back(a[idx]);
            idx += step;
            step--;
        }

        ans.push_back(ans.back());
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}