// problem: https://codeforces.com/problemset/problem/1612/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "-1\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> ans;
    for (int i = b + 1; i <= n; i++)
        ans.push_back(i);

    for (int i = a; i <= b; i++)
        ans.push_back(i);

    for (int i = 1; i < a; i++)
        ans.push_back(i);

    if (ans.size() == n)
    {
        int mn = n, mx = 0;
        for (int i = 0; i < n / 2; i++)
            mn = min(mn, ans[i]);

        for (int i = n / 2; i < n; i++)
            mx = max(mx, ans[i]);

        if (mn == a && mx == b)
        {
            for (int i : ans)
                cout << i << " ";
            cout << '\n';
        }
        else
        {
            no;
        }
    }
    else
        no;
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