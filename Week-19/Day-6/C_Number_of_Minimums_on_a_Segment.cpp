// problem: https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n, m) cout << n << " " << m << "\n"
using namespace std;

const int maxN = 1e5 + 9, inf = 1e9 + 9;
int a[maxN];

struct node
{
    int mn, cnt;
};

node t[4 * maxN];

node merge(node l, node r)
{
    node ans;
    ans.mn = min(l.mn, r.mn);
    ans.cnt = 0;
    if (l.mn == ans.mn)
        ans.cnt += l.cnt;

    if (r.mn == ans.mn)
        ans.cnt += r.cnt;

    return ans;
}

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n].mn = a[b];
        t[n].cnt = 1;
        return;
    }
    int mid = (b + e) / 2, l = n * 2, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);

    t[n] = merge(t[l], t[r]);
}

void update(int n, int b, int e, int i, int v)
{
    if (i > e || i < b)
        return;

    if (b == e)
    {
        t[n].mn = v;
        t[n].cnt = 1;
        return;
    }
    int mid = (b + e) / 2, l = n * 2, r = (2 * n) + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);

    t[n] = merge(t[l], t[r]);
}

node query(int n, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return {inf, 1};

    if (b >= i && e <= j)
        return t[n];
    int mid = (b + e) / 2, l = n * 2, r = (2 * n) + 1;

    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    build(1, 1, n);

    while (m--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int idx, v;
            cin >> idx >> v;
            idx++;

            update(1, 1, n, idx, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l++;
            node res = query(1, 1, n, l, r);
            dekhao(res.mn, res.cnt);
        }
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