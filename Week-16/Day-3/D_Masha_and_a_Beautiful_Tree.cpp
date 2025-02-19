// problem: https://codeforces.com/problemset/problem/1741/D
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

vector<int> a;
int ans = 0;

void f(int l1, int r1, int l2, int r2)
{

    int mx = 0, mn = INT_MAX;

    for (int i = l1; i <= r1; i++)
        mx = max(mx, a[i]);
    for (int i = l2; i <= r2; i++)
        mn = min(mn, a[i]);

    if (mx > mn)
    {
        int r = l2;
        for (int i = l1; i <= r1; i++)
        {
            swap(a[i], a[r]);
            r++;
        }
        ans++;
    }

    if (l1 == r1)
        return;

    int mid1 = (l1 + r1) / 2, mid2 = (l2 + r2) / 2;

    f(l1, mid1, mid1 + 1, r1);
    f(l2, mid2, mid2 + 1, r2);
}
void solve()
{
    int n;
    cin >> n;
    a.resize(n+1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    ans = 0;
    if (is_sorted(a.begin(), a.end()))
    {
        dekhao(0);
        return;
    }

    int mid = (n + 1) / 2;
    f(1, mid, mid + 1, n);
    if (is_sorted(a.begin(), a.end()))
        dekhao(ans);
    else
        dekhao(-1);
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