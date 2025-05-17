// problem: https://codeforces.com/problemset/problem/1878/E
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << " "
using namespace std;

const int maxN = 2e5 + 9;

int a[maxN], t[4 * maxN];

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;

    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = (t[l] & t[r]);
}

ll query(int n, int b, int e, int i, int j)
{
    if (e < i || j < b)
        return INT_MAX;

    if (b >= i && e <= j)
        return t[n];

    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;

    return query(l, b, mid, i, j) & query(r, mid + 1, e, i, j);
}

void solve()
{
    int n, q;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    build(1, 1, n);
    cin >> q;
    while (q--)
    {
        int L, k;
        cin >> L >> k;

        int l = L, r = n, mid, ans = -1;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (query(1, 1, n, L, mid) >= k)
            {
                ans = mid;
                l = ++mid;
            }
            else
                r = --mid;
        }
        dekhao(ans);
    }
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