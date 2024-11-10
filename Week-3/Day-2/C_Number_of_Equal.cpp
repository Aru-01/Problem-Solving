// problem: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C

#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int l = 0, r = 0;
    ll ans = 0;

    while (l < n && r < m)
    {
        int cur = a[l], cnt_1 = 0, cnt_2 = 0;

        while (l < n && a[l] == cur)
        {
            l++;
            cnt_1++;
        }
        while (cur > b[r])
            r++;

        while (r < m && b[r] == cur)
        {
            r++;
            cnt_2++;
        }
        ans += (1ll * cnt_1 * cnt_2);
    }
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}