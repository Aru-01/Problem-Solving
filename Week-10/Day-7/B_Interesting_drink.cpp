// problem: https://codeforces.com/contest/706/problem/B
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    sort(a.begin(), a.end());

    int q;
    cin >> q;
    while (q--)
    {
        int k;
        cin >> k;

        auto ans = upper_bound(a.begin(), a.end(), k);

        cout << ans - a.begin() << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
        solve();
    return 0;
}