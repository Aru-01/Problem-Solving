// problem: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
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

    int q;
    cin >> q;
    sort(a.begin(), a.end());
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        auto l_it = lower_bound(a.begin(), a.end(), l);
        auto r_it = upper_bound(a.begin(), a.end(), r);
        int ans = (r_it - a.begin()) - (l_it - a.begin());

        cout << ans << ' ';
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