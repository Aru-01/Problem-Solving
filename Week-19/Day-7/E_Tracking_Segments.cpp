// problem: https://codeforces.com/problemset/problem/1843/E
#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

const int maxN = 1e5 + 9;
int t[4 * maxN];

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = 0;
        return;
    }

    int mid = (b + e) / 2, l = n * 2, r = (n * 2) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);

    t[n] = t[l] + t[r];
}

void update(int n, int b, int e, int i, int v)
{
    if (i < b || i > e)
        return;

    if (b == e)
    {
        t[n] = v;
        return;
    }
    int mid = (b + e) / 2, l = n * 2, r = (n * 2) + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = t[l] + t[r];
}

int query(int n, int b, int e, int i, int j)
{
    if (e < i || j < b)
    {
        return 0;
    }
    if (b >= i && e <= j)
    {
        return t[n];
    }
    int mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

void solve()
{
    int n, m, q;
    cin >> n >> m;

    vector<pi> a(m);
    for (int i = 0; i < m; i++)
        cin >> a[i].first >> a[i].second;

    cin >> q;
    vector<int> queries(q);
    for (int i = 0; i < q; i++)
        cin >> queries[i];

    auto ok = [&](int mid)
    {
        build(1, 1, n);
        for (int i = 0; i <= mid; i++)
        {
            update(1, 1, n, queries[i], 1);
        }

        bool found = 0;

        for (int i = 0; i < m; i++)
        {
            int L = a[i].first, R = a[i].second, seg_len, one, zero;
            seg_len = (R - L) + 1;
            one = query(1, 1, n, L, R);
            zero = seg_len - one;

            if (one > zero)
            {
                found = 1;
                break;
            }
        }

        return found;
    };

    int l = 0,
        r = q - 1, mid, ans = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    if (ans != -1)
        ans++;

    dekhao(ans);
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