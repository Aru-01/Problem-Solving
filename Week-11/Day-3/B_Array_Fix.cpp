// problem: https://codeforces.com/problemset/problem/1948/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    if (is_sorted(a.begin(), a.end()))
    {
        yes;
        return;
    };

    int ck = 0;
    vector<int> ans;

    for (int i : a)
    {
        int x = i / 10, y = i % 10;

        if (x >= ck && y >= x)
        {
            ck = y;
            ans.push_back(x);
            ans.push_back(y);
        }
        else
        {
            ans.push_back(i);
            ck = i;
        }
    }

    if (is_sorted(ans.begin(), ans.end()))
        yes;
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