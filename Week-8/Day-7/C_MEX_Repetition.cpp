// problem: https://codeforces.com/problemset/problem/1863/C
#include <bits/stdc++.h>
#define ll long long
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;

void solve()
{
    int n;
    ll k;
    cin >> n >> k;

    vector<int> a, v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    v = a;

    sort(v.begin(), v.end());

    int miss = n;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != i)
        {
            miss = i;
            break;
        }
    }

    int temp = a[0];
    for (int i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = miss;
        miss = temp;
    }
    a.push_back(miss);

    int op = (k - 1) % (n + 1);

    for (int i = n + 1 - op; i < n + 1; i++)
        cout << a[i] << " ";
    for (int i = 0; i < n - op; i++)
        cout << a[i] << " ";
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