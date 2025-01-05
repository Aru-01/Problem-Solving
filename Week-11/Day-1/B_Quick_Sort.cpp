// problem: https://codeforces.com/problemset/problem/1768/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "0\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    int cnt = 1;
    for (int &i : a)
    {
        cin >> i;
        if (cnt == i)
            cnt++;
    }

    if (is_sorted(a.begin(), a.end()))
    {
        no;
        return;
    }

    int ans = (n - cnt + k) / k;
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