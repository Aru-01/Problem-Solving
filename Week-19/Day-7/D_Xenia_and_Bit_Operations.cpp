// problem: https://codeforces.com/problemset/problem/339/D
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

const int maxN = (1 << 17) + 9;
int a[maxN], t[4 * maxN];

int merge(int ans_l, int ans_r, int len)
{
    int pw = __lg(len);
    if (pw % 2)
        return ans_l | ans_r;
    else
        return ans_l ^ ans_r;
}

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }

    int mid = (b + e) / 2, l = n * 2, r = (n * 2) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);

    t[n] = merge(t[l], t[r], e - b + 1);
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

    t[n] = merge(t[l], t[r], e - b + 1);
}

void solve()
{
    int n, q;
    cin >> n >> q;
    n = 1 << n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    build(1, 1, n);

    while (q--)
    {
        int i, v;
        cin >> i >> v;
        update(1, 1, n, i, v);

        dekhao(t[1]);
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