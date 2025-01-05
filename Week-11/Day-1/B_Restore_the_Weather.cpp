// problem: https://codeforces.com/problemset/problem/1833/B
#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pi> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    vector<int> b(n), ans(n);
    for (int &i : b)
        cin >> i;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++)
    {
        ans[a[i].second] = b[i];
    }

    for (int i : ans)
        cout << i << " ";
    cout << '\n';
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