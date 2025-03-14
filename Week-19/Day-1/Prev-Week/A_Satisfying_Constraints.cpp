// problem: https://codeforces.com/problemset/problem/1920/A
#include <bits/stdc++.h>
#define ll long long
#define no cout << "0\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int l = -1, r = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int a, x;
        cin >> a >> x;
        if (a == 1)
            l = max(l, x);
        else if (a == 2)
            r = min(r, x);
        else
            v.push_back(x);
    }

    if (l > r)
    {
        no;
        return;
    }

    int ans = r - l + 1, cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >= l && v[i] <= r)
            cnt++;
    }
    dekhao(ans - cnt);
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
