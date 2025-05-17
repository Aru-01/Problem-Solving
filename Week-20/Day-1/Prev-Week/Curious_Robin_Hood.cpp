// problem: https://lightoj.com/problem/curious-robin-hood
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define dekhao(n) cout << n << "\n"
using namespace std;

const int maxN = 1e5 + 9;
int ca_se = 0;
int arr[maxN];
ll t[4 * maxN];

void build(int n, int b, int e)
{

    if (b == e)
    {
        t[n] = arr[b];
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;

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
        t[n] += v;
        return;
    }

    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;

    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = t[l] + t[r];
}

ll query(int n, int b, int e, int i, int j)
{

    if (e < i || j < b)
        return 0;

    if (b >= i && e <= j)
        return t[n];

    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;

    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

void solve()
{
    int n, q ;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < 4 * n; i++)
        t[i] = 0;

    build(1, 0, n - 1);

    cout << "Case " << ++ca_se << ":\n";

    while (q--)
    {
        int ty;
        cin >> ty;
        if (ty == 1)
        {
            int idx;
            cin >> idx;

            dekhao(arr[idx]);
            update(1, 0, n - 1, idx, -arr[idx]);
            arr[idx] = 0;
        }
        else if (ty == 2)
        {
            int idx, v;
            cin >> idx >> v;

            update(1, 0, n - 1, idx, v);
            arr[idx] += v;
        }
        else if (ty == 3)
        {
            int idx, v;
            cin >> idx >> v;

            dekhao(query(1, 0, n - 1, idx, v));
        }
    }
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